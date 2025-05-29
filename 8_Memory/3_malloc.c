#include <stdio.h>
#include <stdlib.h>

int main(){

  int number = 0;

  printf("Enter the number of grades : \n");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char));

  if(grades == NULL){
    printf("Memory allocation Failed!\n");
    return 1;
  }

  for(int i = 0; i < number; i++){
    printf("Enter grade #%d :\n", i + 1);
    scanf(" %c", &grades[i]);
  }
  
  for(int i = 0; i < number; i++){
    printf(" %c", grades[i]);
  }

  free(grades);
  grades = NULL; 

return 0;
}