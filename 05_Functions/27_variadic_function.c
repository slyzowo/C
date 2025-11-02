#include <stdio.h>
#include <stdarg.h>

// Variadic function to print given arguments
void sum(int n, ...) {
    va_list args;
    va_start(args, n);  
    for (int i = 0; i < n; i++) 
        printf("%d ", va_arg(args, int));
    printf("\n");
    va_end(args);
}


int main() {
// organizes the nums by least to greatest
  sum(3, 1, 2, 3);
  sum(5, 1, 2, 3, 4, 5);
  
return 0;
}