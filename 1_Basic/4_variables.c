#include <stdio.h>
#include <stdbool.h>

int main(){

  int a;  // assignment
  a = 15; // declaration

  int b = 25; // both assignment and declaration


  int age = 18;             // digit / integer
  float pi = 3.141592;      // decimal numbers
  char grade = 'C';         // character
  char name[] = "slyzOwO";  // string is a list of characters
  bool student = true;      // a boolean is a True or False statement
  

  printf("you are %d years old \n", age);         // d = digit
  printf("pi is %f \n", pi);                      // s = string
  printf("my grade is %c \n", grade);             // c = character
  printf("you\'re name is %s \n", name);          // s = string
  printf("you're a student :  %d \n", student);   // 1 = true, 0 = false we can get more advanced with this later

return 0;
}