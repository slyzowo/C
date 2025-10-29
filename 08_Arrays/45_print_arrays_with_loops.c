#include <stdio.h>

int main(){

  double prices1[] = {5.0, 6.0, 7.0};

  printf("%d \n", sizeof(prices1));

  for (int i = 0; i < sizeof(prices1) / sizeof(prices1[0]); i++){
    printf("%lf \n", prices1[i]);
  }

return 0;
}