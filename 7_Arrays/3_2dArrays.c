#include <stdio.h>

int main(){

// 2d arrays, an array of an array

int numbers1[3][3] = {
  {1, 2, 3}, 
  {4, 5, 6},
  {7, 8, 9}
};
  int rows = sizeof(numbers1) / sizeof(numbers1[0]);
  printf("Rows : %d\n", rows);

  int columns = sizeof(numbers1[0]) / sizeof(numbers1[0][0]);
  printf("Columns : %d\n", columns);

// int numbers2[0][2];
// int numbers2[0][0] = 1; // a row[0] and a column[0]
// int numbers2[0][1] = 1; // a row[0] and a column[1]
// int numbers2[0][2] = 1; // a row[0] and a column[2]

  for (int i = 0; i < 3; i++){ // rows

    for (int j = 0; j < 3; j++){ // columns

      printf("%d ", numbers1[i][j]);

    }
    printf("\n");
  }
  

return 0;
}