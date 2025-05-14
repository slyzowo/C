#include <stdio.h>

int main(){

  int age;

// asks age
  printf("what is your age? \n");
  scanf("%d", &age);

// age is less than 0
  if(age < 0){
    printf("You are not born yet \n");
  }

// age is less than 18
  else if (age < 18){
    printf("you are a child \n");
  }

// age is greater than 18
  else if (age >= 18){
    printf("you are an adult \n");
  }

// age is greater than 125
  else if (age >= 125){
    printf("you are dead \n");
  }

// Edge Case
  else{
    printf("how did you get here? you are not supposed to be here! >:( \n");
  }

return 0;
}