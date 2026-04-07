#include <iostream>

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before: x = " << x << ", y = " << y << std::endl;
    
    swap(x, y);
    
    std::cout << "After:  x = " << x << ", y = " << y << std::endl;

    double a = 3.14, b = 2.71;
    std::cout << "\nBefore: a = " << a << ", b = " << b << std::endl;
    
    swap(a, b);
    
    std::cout << "After:  a = " << a << ", b = " << b << std::endl;

    return 0;
}