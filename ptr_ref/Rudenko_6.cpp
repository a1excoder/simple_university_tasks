#include <iostream>

void sum(int**, int*&, int*);

int main() {
    int a, b, n;
    int* pa = &a;
    int* pb = &b;
    
    std::cin >> a >> b >> n;
    
    sum(&pa, pb, &n);
    
    return 0;
}

void sum(int** a_2ptr, int*& b_ref_on_ptr, int* n_ptr) {
    std::cout << ( (**a_2ptr) * (*n_ptr) ) << " " << (*b_ref_on_ptr * (*n_ptr) );
}