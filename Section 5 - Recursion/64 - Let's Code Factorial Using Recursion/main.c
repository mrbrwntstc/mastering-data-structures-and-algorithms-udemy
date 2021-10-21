#include <stdio.h>

/**
 * @brief The factorial of a number n is the product all numbers from 1 to n, inclusive
 * 
 * @param n 
 * @return int 
 */
int factorial(int n) {
  if((n == 0) || (n == 1)) {
    return 1;
  }

  return (factorial(n-1) * n);
}

int iterative_factorial(int n) {
  int product = 0;
  for(int i = 0; i <= n; i++) {
    if((i == 0) || (i == 1)) {
      product = 1;
    }
    product *= i;
  }

  return product;
}

int main() {
  printf("5! is %d recursively\n", factorial(5));
  printf("5! is %d iteratively\n", iterative_factorial(5));
  return 0;
}