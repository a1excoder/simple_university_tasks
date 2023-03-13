#include <iostream>

void max(int, int*, int**);

int main() {
    int a = 0, b = 0, c = 0;
    int* ptr_c = &c;
    
    std::cin >> a >> b >> c;
    
    max(a, &b, &ptr_c);
    
    return 0;
}

void max(int a, int* b_ptr, int** c_2ptr) {
    std::cout << "max number is: ";
    
    if (a > *b_ptr && a > **c_2ptr) std::cout << a << "\n";
    else if (*b_ptr > a && *b_ptr > **c_2ptr) std::cout << *b_ptr << "\n";
    else std::cout << **c_2ptr << "\n";
}