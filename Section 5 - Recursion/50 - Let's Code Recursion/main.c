#include <stdio.h>

/**
 * @brief In head recursion, no other calls except the function call are make.
 * In tail recursion, the function call is the very last call made.
 * 
 * The time complexity for fun() is O(n)
 * 
 * @param n 
 */
void fun(int n) {
  if(n > 0) {
    // fun(n-1);           // head recursion
    printf("%d ", n);
    fun(n-1);           // tail recursion
  }
}

int main() {
  int x = 3;
  fun(x);
  printf("\n");
  return 0;
}