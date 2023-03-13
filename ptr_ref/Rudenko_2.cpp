#include <iostream>

void tens(int& n) {
    while (n >= 10) {
        n /= 10;
    }
}

int main() {
    int n = 0;
    
repeat:
    std::cin >> n;
    if (n >= 100) goto repeat;
    
    tens(n);
    
    std::cout << n << std::endl;
    
    return 0;
}
