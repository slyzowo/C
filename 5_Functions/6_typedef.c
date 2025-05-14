#include <stdio.h>

typedef char beans[25];

typedef struct{
  char username[25];
  char password[25];
  int id;
} User;


int main(){

// typedef, a keyword that gives an existing datatype a nickname

  beans beens = "beans";

  User user1 = {"hey", "now", 121};
  User user2 = {"you're", "a rockstar", 121};

return 0;
}