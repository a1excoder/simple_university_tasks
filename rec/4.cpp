#include <iostream>

int exponentiation(double a, int n) {
    if (n == 0) return 1;
    return a * exponentiation(a, n - 1);
}

int main(void) {  
    std::cout << exponentiation(2.0, 3); // 8
    return 0;
}
