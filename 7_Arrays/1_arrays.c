#include <stdio.h>

int main(){

// a data structure that stores several of the same data types

  double prices1[] = {5.0, 6.0, 7.0};

// index starts at 0
  printf("%lf \n", prices1[0]);
  printf("%lf \n", prices1[1]);
  printf("%lf \n", prices1[2]);

  double prices2[3];

  prices2[0] = 5.0;
  prices2[1] = 6.0;
  prices2[2] = 7.0;

  printf("%lf \n", prices2[0]);
  printf("%lf \n", prices2[1]);
  printf("%lf \n", prices2[2]);

return 0;
}