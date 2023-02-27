#include <iostream>

int power(int a, int n) {
    if (n != 0) return a * power(a, n - 1);
    else return 1;
}

int main(void) {
    using namespace std;

    std::cout << power(2, 5) << std::endl; // 32
    return 0;
}
