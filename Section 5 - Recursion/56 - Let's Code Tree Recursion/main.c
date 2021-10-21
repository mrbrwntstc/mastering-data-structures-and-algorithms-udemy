#include <stdio.h>

/**
 * @brief Tree recursion is when the function calls itself more than once in the function body
 * 
 * The time complexity for this function is O(2^n)
 * The space complexity for this function is O(n)
 * For optimization purposes, function calls in the same address on the stack will be re-used,
 * hence the linear space complexity.
 * 
 * @param n 
 */
void fun(int n) {
  if(n > 0) {
    printf("%d ", n);
    fun(n-1);
    fun(n-1);
  }
}

int main() {
  fun(3);
  printf("\n");
  return 0;
}