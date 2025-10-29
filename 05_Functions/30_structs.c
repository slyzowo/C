#include <stdio.h>
#include <string.h>

// structs are very similar to classes but have no methods

struct Player{
  char name[12];
  int score;
};


int main(){

struct Player player1;
struct Player player2;

  strcpy(player1.name, "lilith");
  player1.score = 4;

  printf("%s", player1.name);
  printf("%d", player1.score);

  strcpy(player2.name, "yeets");
  player1.score = 8;

  printf("%s", player2.name);
  printf("%d", player2.score);

return 0;
}