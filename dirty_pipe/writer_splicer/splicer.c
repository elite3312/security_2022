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
// ./splicer <foo |cat >/dev/null
//gcc -o splicer splicer.c 