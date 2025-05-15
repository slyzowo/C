#include <stdio.h>
#include <string.h>

int main(){

  char x = 'X';
  char y = 'Y';
  char temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  temp = x;  // temp <- x
  x = y;     // x <- y
  y = temp;  // y <- temp

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  char lemonade[15] = "lemonade";
  char water[15] = "water";
  char temp1[15];

  printf("lemonade = %s\n", lemonade);
  printf("water = %s\n", water);

  strcpy(temp1, lemonade);
  strcpy(lemonade, water);
  strcpy(water, temp1);

  printf("lemonade = %s\n", lemonade);
  printf("water = %s\n", water);

return 0;
}