#include <stdio.h>
#include <string.h>

int main(){

  char string1[] = "sly";
  char string2[] = "zoo";
  char string3[] = "lilith";

  printf("Normal String1 : %s \n", string1);
  printf("Normal String2 : %s \n", string2);

  strlwr(string2); // makes the string lowercase
  printf("string lower : %s \n", string2);

  strupr(string1); // makes the string uppercase
  printf("string upper : %s \n", string1);

  strcat(string1, string2); // makes string1 = string1 + string2
  printf("string concatenete(append) : %s \n", string1);

  strncat(string1, string2, 3); // string1 = string1 + n chars of string2
  printf("string n concatenate : %s \n", string1);

  strcpy(string1, string2); // copys string2 to string1
  printf("string copy : %s \n", string1);

  strncpy(string1, string2, 2); // copys n chars to string1 from string2
  printf("string n copy : %s \n", string1);

  strset(string1, '?'); // sets a string to a char
  printf("string set a char to all chars : %s \n", string1);

  strnset(string1, 3, 'T'); // sets a string to a char for n chars
  printf("string set a char to n chars : %s \n", string1);

  strrev(string3);
  printf("string reverse : %s \n", string3);

  int result = strlen(string3);
  printf("string length : %s \n", string3);

  int result = strcmp(string3, string1);
  printf("string compare : %s \n", string3);

  int result = strncmp(string3, string2, 1);
  printf("string n compare : %s \n", string3);

  int result = strcmpi(string3, string2);
  printf("string compare (ignore case) : %s \n", string3);

  int result = strncmpi(string3, string2, 1);
  printf("string n compare (ignore case) : %s \n", string3);

return 0;
}