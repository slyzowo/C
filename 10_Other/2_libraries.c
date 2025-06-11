#include <stdio.h>
#include "lib.h" // our library we're going to make
// with Code Runner it automatically links everything and makes an exe

int main(){

  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;

// add
  a = add(1, 2);
  printf("%d \n", a);

// subract
  b = subtract(1, 2);
  printf("%d \n", b);

// multiply
  c = multiply(4, 2);
  printf("%d \n", c);

// divide
  d = multiply(9, 3);
  printf("%d \n", d);

return 0;
}