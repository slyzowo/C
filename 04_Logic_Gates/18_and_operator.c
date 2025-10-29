#include <stdio.h>

int main(){

  float temp;

// ask for temp in C
  printf("what is the temp? \'C\' \n");
  scanf("%f", &temp);

// is temp less than 19
  if (temp <= 19){
    printf("Thats cold");
  }

// is temp greater than or equal to 20 AND less than or equal to 40
  else if (temp >= 20 && temp <= 40){
    printf("Thats warm");
  }

// is temp greater than or equal to 40
  else if (temp > 40){
    printf("Thats hot");
  }

  else{
    printf("How did you get here?");
  }

return 0;
}