#include <stdio.h>

int main(){

  int rows = 0;
  int columns = 0;
  char symbol;

  printf("Enter the number of Rows :\n");
  scanf("%d", &rows);

  printf("Enter the number of Columns :\n");
  scanf("%d", &columns);

  scanf("%c"); // clears buffer for symbol

  printf("Enter a Symbol :\n");
  scanf("%c", &symbol);


  for(int i = 1; i <= rows; i++){

    for (int j = 1; j <= columns; j++){

      printf("%c", symbol);

    }
    printf("\n");
  }

return 0;
}