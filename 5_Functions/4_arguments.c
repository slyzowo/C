#include <stdio.h>

void birthday(char name[], int age){

  printf("you are %s \n", name);
  printf("and you are %d", age);

}

int main(){

  char name[] = "slyzowo";
  int age = 18;

  birthday(name, 18);

return 0;
}