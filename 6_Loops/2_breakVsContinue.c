#include <stdio.h>

int main(){

// Continue : skips part of the code, and runs the rest ex: 1,2,4,5,6...
// Break : exits the loop/switch ex: 1, 2

  for (int i = 1; i <= 20; i++){
    
    if (i == 13){
      // continue;
      break;
    }
    
    printf("%i \n", i);
  }

return 0;
}