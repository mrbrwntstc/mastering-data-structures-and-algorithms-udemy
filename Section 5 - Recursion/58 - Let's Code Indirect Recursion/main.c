#include <stdio.h>

/**
 * @brief indirect recursion is a cyclical recursion
 * 
 * in this example, fun_a is calling fun_b, which then calls fun_a
 * thus creating the cycle
 * 
 */

void fun_a(int n);
void fun_b(int n);

void fun_a(int n) {
  if(n > 0) {
    printf("%d ", n);
    fun_b(n-1);
  }
}

void fun_b(int n) {
  if(n > 1) {
    printf("%d ", n);
    fun_a(n/2);
  }
}

int main() {
  fun_a(20);
  printf("\n")
  return 0;
}