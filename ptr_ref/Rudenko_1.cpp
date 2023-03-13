#include <iostream>

int division(int& n, int* k) {
    return *k / n;
}

int main() {
    int n = 3, k = 12;
    
    std::cout << division(n, &k) << std::endl;
    
    return 0;
}
