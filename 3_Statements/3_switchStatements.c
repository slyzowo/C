#include <stdio.h>

int main(){

  char grade;

  printf("Enter a letter grade.\n");
  scanf("%c", &grade);

  switch(grade){
  case 'A': printf("You did amazing!");
    break;
  case 'a': printf("You did amazing!");
    break;

  case 'B': printf("You did great!");
    break;
  case 'b': printf("You did great!");
    break;

  case 'C': printf("You did good");
    break;
  case 'c': printf("You did good");
    break;

  case 'D': printf("You did okay");
    break;
  case 'd': printf("You did okay");
    break;

  case 'F': printf("YOU FAILED!");
    break;
  case 'f': printf("YOU FAILED!");
    break;
  
  default: printf("How did you get here?");
    break;
  }

return 0;
}