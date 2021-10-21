#include <stdio.h>

/**
 * @brief Nested recursion is when the parameter for the function is the function itself
 * 
 * @param n 
 */
int fun(int n) {
  if(n > 100) {
    return (n-10);
  }
  
  return fun(fun(n+11));
}

int main() {
  int r = fun(95);
  printf("%d\n", r);
  return 0;
}