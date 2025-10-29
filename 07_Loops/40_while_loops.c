#include <stdio.h>
#include <string.h>

int main(){

  char name[25];

  printf("what is your name? \n");
  fgets(name, 25, stdin);

  name[strlen(name) - 1] = '\0';

  while(strlen(name) == 0){
    printf("PUT IN YOUR NAME! \n");
    printf("what is your name? \n");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';
  }

  printf("Welcome %s", name);

return 0;
}