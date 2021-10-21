#include <stdio.h>

/**
 * @brief Calculate the sum of all natural numbers up to some arbitrary number, inclusive
 * 
 * @param n 
 * @return int 
 */
int sum(int n) {
  if(n == 1) {
    return 1;
  }

  return sum(n-1) + n;
}

/**
 * @brief iterative approach
 * 
 * @param n 
 * @return int 
 */
int iterative_sum(int n) {
  int sum = 0;
  for(int i = 0; i <= n; i++) {
    sum += i;
  }

  return sum;
}

int sum_of_all_natural_numbers_formula(int n) {
  return (n * (n+1)) / 2;
}

int main() {
  printf("Sum of all natural numbers recursive: %d\n", sum(10));
  printf("Sum of all natural numbers iterative: %d\n", iterative_sum(10));
  printf("Sum of all natural numbers formula: %d\n", sum_of_all_natural_numbers_formula(10));
  return 0;
}