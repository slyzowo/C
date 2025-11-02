#include <stdio.h>

// global, can be accessed by every function
int age;

int main() {

// this assignment is from this function only, no other function can access it by default
  age = 18;

return 0;
}