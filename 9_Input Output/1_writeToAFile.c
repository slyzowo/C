#include <stdio.h>

int main(){

/*
  w = Write
  a = Append
  r = Read
*/

  FILE *pF = fopen("test.txt", "w");

  fprintf(pF, "Spongebob Squarepants");

  fclose(pF);

// makes a file called "Test.txt" writes "Spongebob Squarepants" and closes it

return 0;
}