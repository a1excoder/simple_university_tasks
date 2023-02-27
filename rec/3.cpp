#include <iostream>

bool IsPrime(int n) {
    if (n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n%i==0) return false;
    }

    return true;
}

int main(void) {
  
    if (IsPrime(7)) {
      std::cout << "YES" << std::endl;
    } else std::cout << "NO" << std::endl;

    return 0;
}
