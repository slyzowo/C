#include <stdio.h>
#include <windows.h>

int main(){

  int hertz = 780;
  int duration = 300; // in ms not s

  Beep(hertz, duration);

return 0;
}