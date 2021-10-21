#include <stdio.h>

/**
 * @brief m to the power of n is m multiplied n times.
 * 
 * @param m the base
 * @param n the exponent
 * @return int 
 */
int power(int m, int n) {
  if(n == 0) {
    return 1;
  }

  return power(m, n-1) * m;
}

/**
 * @brief because of the multiplicitave properties of exponents, less multiplication operations can be performed
 * 
 * @param m the base
 * @param n the exponent
 * @return int 
 */
int power_optimized(int m, int n) {
  if(n == 0) {
    return 1;
  } else if((n%2) == 0) {
    return power_optimized(m*m, n/2);
  } else {
    return m * power_optimized(m*m, (n-1)/2);
  }
}

int main() {
  printf("2^9 = %d\n", power(2,9));
  printf("2^9 = %d optimized\n", power_optimized(2,9));
  return 0;
}