#include <unistd.h>
int main(int argc, char **argv) {
  for (;;) {write(1, "AAAAA", 5);sleep(1);}
  
}
// ./writer >foo
//gcc -o writer writer.c 