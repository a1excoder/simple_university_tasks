#include <iostream>

int MinDivisor(int n) {
    int value = n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            value = n / i;
        }
    }

    return value;
}

int main(void) {
    std::cout << MinDivisor(6) << std::endl;
    return 0;
}
