#include <iostream>

int fib(int n) {
  if (n == 0 || n == 1) return n;
  return fib(n - 1) + fib(n - 2);
}

int main(void) {
    std::cout << fib(5) << std::endl; // 21
    return 0;
}
