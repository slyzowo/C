#include <stdio.h>

enum Day{
  monday, // monday = 0
  tuesday = 1,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
};

int main(){

  enum Day today = monday;

  printf("%d", today);

return 0;
}