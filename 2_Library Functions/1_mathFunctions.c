#include <stdio.h>
#include <math.h>

int main(){

// square root
  double A = sqrt(9);
  printf("Square root : %lf \n", A);

// exponent
  double B = pow(2 ,4); // 2⁴
  printf("Exponent : %lf \n", B);

// rounding
  int C = round(3.14);
  printf("Round : %d \n", C);

// ceiling (round up only)
  int D = ceil(3.14);
  printf("Ceiling : %d \n", D);

// floor (round down only)
  int E = floor(3.14);
  printf("Floor : %d \n", E);

// Absolute Value (float)
  double F = fabs(-11.11);
  printf("Absolute Value (float) : %lf \n", F);

// Absolute Value (int)
  double G = abs(-11);
  printf("Absolute Value (int) : %lf \n", G);

// Log
  double H = log(3);
  printf("Log : %lf \n", H);

// Sine
  double I = sin(45);
  printf("Sine : %lf \n", I);

// Cosine
  double J = cos(45);
  printf("Cosine : %lf \n", J);

// Tangent
  double K = tan(45);
  printf("Tangent : %lf \n", K);

return 0;
}