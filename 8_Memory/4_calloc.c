#include <stdio.h>
#include <stdlib.h>

int main(){

  int number = 0;
  printf("Enter the number of players : \n");
  scanf("%d", &number);

  int *scores = calloc(number, sizeof(int));

  if(scores == NULL){
    printf("Memory allocation Failed!\n");
    return 1;
  }

  for(int i = 0; i < number; i++){
    printf("Enter scores #%d :\n", i + 1);
    scanf(" %c", &scores[i]);
  }
  
  for(int i = 0; i < number; i++){
    printf(" %d", scores[i]);
  }

  free(scores);
  scores = NULL; 

return 0;
}