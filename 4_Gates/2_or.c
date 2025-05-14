#include <stdio.h>

int main(){

  float temp;

// ask for temp in C
  printf("what is the temp? \'C\' \n");
  scanf("%f", &temp);

// is temp greater than or equal to 20 OR less than or equal to 39
  if (temp >= 20 && temp <= 35){
    printf("Thats good weather");
  }

// is temp less than 19 is temp greater than or equal to 40
  else if (temp <= 19 || temp >= 36){
    printf("Thats bad weather");
  }

  else{
    printf("How did you get here?");
  }

return 0;
}