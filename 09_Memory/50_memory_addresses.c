#include <stdio.h>

int main(){

/*
  Memory,         an array of bytes within RAM (Random Access Memory)
  Memory Block,   a single unit within memory
  Memory Address, The address of where a memory block is stored
*/

  char a = 'A';
  char b = 'B';
  char c = 'C';

  printf("%c is %d byte(s)\n", a, sizeof(a));
  printf("%c is stored at %p\n", a, &a);

  printf("%c is %d byte(s)\n", b, sizeof(b));
  printf("%c is stored at %p\n", b, &b);

  printf("%c is %d byte(s)\n", c, sizeof(c));
  printf("%c is stored at %p\n", c, &c);

return 0;
}