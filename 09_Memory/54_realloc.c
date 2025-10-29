#include <stdio.h>
#include <stdlib.h>

int main(){

  int number = 0;
  int newNumber = 0;

  printf("Enter the number of prices : ");
  scanf("%d", &number);

  float *prices = malloc(number * sizeof(float));

  if(prices == NULL){ 
    printf("Memory Allocation of number Failed!\n");
    return 1;
  }

  for(int i = 0; i < number; i++){
    printf("Enter Price #%d", i + 1);
    scanf("%f", &prices[i]);
  }

  printf("Enter a new number of prices : ");
  scanf("%d", &newNumber);

  float *temp = realloc(prices, newNumber * sizeof(float));

    if(temp == NULL){ 
    printf("Memory Reallocation of newNumber Failed!\n");
  }

  else{
    prices = temp;
    temp = NULL;

    for(int i = 0; i < newNumber; i++){
      printf("Enter Price #%d", i + 1);
      scanf("%f", &prices[i]);

      for(int i = 0; i < number; i++){
        printf("$%.2f\n", prices[i]);
      }
  }


  free(prices);
  prices = NULL;

return 0;
}