#include <stdio.h>

/**
 * @brief calculate e^x using the taylor series with accuracy up to n terms
 * e^x = summation[0-n](x^n/n!)
 * 
 * @param x     the exponent
 * @param n     how many terms
 * @return int 
 */
double e(int x, int n) {
  static double power = 1;
  static double factorial = 1;
  if(n == 0) {
    return 1;
  }

  double result = e(x,n-1);
  power *= x;
  factorial *= n;

  return (result + (power/factorial));
}

int main() {
  printf("e^1 with accuracy up to 10 terms is %lf\n", e(1,10));
  return 0;
}