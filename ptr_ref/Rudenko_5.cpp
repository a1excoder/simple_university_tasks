#include <iostream>

void triangle(int, int&, int*&);

int main() {
    int a = 0, b = 0, c = 0;
    int *c_ptr = &c;
    
    std::cin >> a >> b >> c;
    
    triangle(a, b, c_ptr);
    
    return 0;
}

void triangle(int a, int& b_ref, int*& c_ref_on_ptr) {
    if (a + b_ref <= *c_ref_on_ptr || a + *c_ref_on_ptr <= b_ref || b_ref + *c_ref_on_ptr <= a) std::cout << "NO";
    else std::cout << "YES";
}