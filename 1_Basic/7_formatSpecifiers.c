#include <stdio.h>
#include <stdbool.h>         // for booleans to work, you have to have this library

int main(){

// Letters
  char a = 'A';
  printf("%c \n", a);

  char b = 100;
  printf("%c \n", b);

  char c[] = "BBB";
  printf("%s \n", c);

  unsigned char m = 255;
  printf("%c \n", m);


// Numbers
  float d = 3.14159;
  printf("%f \n", d);

  double e = 3.14159265359;
  printf("%lf \n", e);

  short int f = 24233;
  printf("%d \n", f);

  unsigned short int g = 24123;
  printf("%u \n", g);

  int h = 54323;
  printf("%d \n", h);

  unsigned int i = 52312;
  printf("%u \n", i);

  long long int j = 57654123483;
  printf("%d \n", j);

  unsigned long long int k = 968743542;
  printf("%u \n", k);

// True or False
  bool l = true;
  printf("%d \n", l);


// Formatting
  printf("%0.3lf \n", e); // shows only 3 nums after decimal

  printf("%12.2lf \n", e); // minimum field width

  printf("%-lf \n", e); // left align



return 0;
}