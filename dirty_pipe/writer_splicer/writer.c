#include <unistd.h>
int main(int argc, char **argv) {
  for (;;) write(1, "AAAAA", 5);
}
// ./writer >foo
//write to foo