#include <stdio.h>
#include <string.h>

int main(){

  char cars[][10] = {"mustang", "corvet", "lambo", "chevy"};

// to change an element in the array you have to strcpy
  strcpy(cars[0], "ford"); // changes mustang to ford

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++){
    printf("%s\n", cars[i]);
  }
  

return 0;
}