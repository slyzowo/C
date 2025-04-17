#include <stdio.h>
#include <stdbool.h>         // for booleans to work, you have to have this library

int main(){

// Letters
  char a = 'A';
  printf("%c \n", a);
/*
  single character
  %c (character)
*/

  char b = 100;
  printf("%c \n", b);
/* 
  if you use a number with the char datatype it will use the ascii table to print that letter
*/

  char c[] = "BBB";
  printf("%s \n", c);
/*
  array of characters
  %s (string)
*/


// Numbers
  float d = 3.14159;
  printf("%f \n", d);
/*
  4 bytes of memory 6-7 digits
  %f (float)
*/

  double e = 3.14159265359;
  printf("%lf \n", e);
/*
  8 bytes of memory
  15-16 digits after the decimal long
  %lf (long float)
*/

  short int f = 24233;
  printf("%d \n", f);
/*
  2 bytes
  -32,768 - +32,767
  %d
  can just use short and not short int
*/

  unsigned short int g = 24233;
  printf("%u \n", g);
/*
  2 bytes
  0 - +65,535
  %d 
*/

  int h = 54323;
  printf("%d \n", h);
/*
  4 bytes
  -2,147,483,648 - +2,147,483,647
  %d
*/

  unsigned int i = 54323;
  printf("%u \n", i);
/*
  4 bytes
  0 - +4,294,967,295	
  %d
*/

  long long int j = 54323;
  printf("%d \n", j);
/*
  4 bytes
  -2,147,483,648 - +2,147,483,647
  %d
*/

  unsigned long long int k = 54323;
  printf("%u \n", k);
/*
  4 bytes
  0 - +4,294,967,295	
  %d
*/

  // True or False
  bool l = true;
  printf("%d \n", l);
/* 
  1 byte
  True or False
  %d
*/


  // Other
  printf("%0.3lf \n", e);
/*
  5 points after the decimal
*/

  unsigned char m = 255;
  printf("%c \n", m);
/*
  unsigned just means no negative numbers, only positive
*/



return 0;
}