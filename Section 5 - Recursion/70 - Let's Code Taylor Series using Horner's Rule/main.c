#include <stdio.h>

/**
 * @brief The taylor series for calculating e^x can be optimized by taking out like terms
 * 
 * @param x         the exponent
 * @param n         how many terms to calculate
 * @return double 
 */
double horners_rule(int x, int n) {
  static double result = 1;
  if(n == 0) {
    return result;
  }
  
  result = 1 + (x*result)/n;
  return horners_rule(x, n-1);
}

int main() {
  printf("e using horner's rule is %lf\n", horners_rule(1,10));
  return 0;
}