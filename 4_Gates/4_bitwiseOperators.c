#include <stdio.h>

int main(){
/*
  Bitwise Operators, Special operators used in bit level programming

  &  = AND
  |  = OR
  ^  = XOR (exclusive or)
  << = left shift
  >> = right shift
*/

  int x = 6;  // 0000 0110
  int y = 12; // 0000 1100
  int z = 0;  // 0000 0000 -> 0000 0010 = 4
  z = x & y;
  printf("AND = %d\n", z);
  
  x = 6;  // 0000 0110
  y = 12; // 0000 1100
  z = 0;  // 0000 0000 -> 0000 1110 = 14
  z = x | y;
  printf("OR = %d\n", z);

  x = 6;  // 0000 0110
  y = 12; // 0000 1100
  z = 0;  // 0000 0000 -> 0000 1010 = 10
  z = x ^ y;
  printf("XOR = %d\n", z);

  x = 6;  // 0000 0110
  z = 0;  // 0000 0000 -> 0001 1000 = 24
  z = x << 2;
  printf("left shift = %d\n", z);

  x = 6;  // 0000 0110
  z = 0;  // 0000 0000 -> 0000 0011 = 3
  z = x >> 1;
  printf("right shift = %d\n", z);

return 0;
}