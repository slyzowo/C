#include <stdio.h>

void sortarray(int array[], int size){

  for(int i = 0; i < size - 1; i++){

    for(int j = 0; j < size - 1; j++){

      if (array[j] > array[j+1]){
        int temp = array[j]; 
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

void printarray(int array[], int size){

  for (int i = 0; i < size; i++){
    printf("%d \n", array[i]);
  }
  
}

int main(){

  int array[] = {9, 5, 13, 45, 12, 6, 8, 21};

  int size = sizeof(array) / sizeof(array[0]);

  sortarray(array, size);
  printarray(array, size);

return 0;
}