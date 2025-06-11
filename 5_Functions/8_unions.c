#include <stdio.h>

/* 
  unions are like structs but unlike Structs; Unions share memory addresses
*/

union abc {
// the size of a union is by the largest member in memory (in this case int because it is 4 bytes)
  int a;
  char b;
}var;


int main(){

  var.a = 65;

  printf("a = %d \n", var.a);
  printf("b = %c", var.b);    // A = 65 in ascii

return 0;
}