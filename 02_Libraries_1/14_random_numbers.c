#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Computer random numbers are not real random, they are pseudo-random (fake random)

int main(){

// you need a seed to generate random numbers, here we're using the time as a seed

  srand(time(0));

  int randomNumber1 = (rand() % 6) + 1; // random number = (random() % Maximum) + Minimum

  printf("%d", randomNumber1);

return 0;
}