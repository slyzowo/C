#include <stdio.h>
#define MIN(A, B) (A < B ? A : B)  // function like bc of ()
#define PI 3.14                    // variable like

int main(){
/* 
  How it works : 

  the MIN in the function gets directly replaced during the preproccessing phase of complilation like this

  printf("%d", MIN(1, 2) (1 < 2 ? 1 : 2)); // the min is 1

  its like a function but smaller, and takes place during a different time
*/

  printf("%d\n", MIN(1, 5));       // the min is 1
  printf("%.2f\n", MIN(3.14, 1.12)); // #define doesnt care about types, a double bladed sword

  printf("%.2f\n", PI);

return 0;
}