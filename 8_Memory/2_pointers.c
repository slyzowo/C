#include <stdio.h>

int main(){

  int age = 18;

  int *pAge = &age; // integer pointerAge is equal to the address of age

  printf("Address of age = %p\n", &age);
  printf("Value of PAge = %p\n", pAge); // same thing

  printf("Value stored at PAge = %d\n", *pAge); // dereferencing

return 0;
}