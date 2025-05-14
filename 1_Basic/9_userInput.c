#include <stdio.h>
#include <string.h>

int main(){

  int age = 0;
  char pizza[255];

  printf("what is your favorite pizza?");

  fgets(pizza, 255, stdin); // for spaces

  pizza[strlen(pizza) -1] = '\0';

  printf("%s pizza is your favorite pizza \n", pizza);

  printf("what is your age? \n");
  scanf("%d", &age); // for no spaces

  printf("%d is your age \n", age);

return 0;
}