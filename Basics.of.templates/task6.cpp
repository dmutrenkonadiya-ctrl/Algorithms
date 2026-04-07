#include <iostream>

template<typename T, typename U>
struct pair {
    T first;
    U second;

    pair(T a, U b) : first(a), second(b) {}
};

int main() {
    pair<int, double> p1(5, 3.14);
    pair<char, int> p2('A', 42);

    std::cout << p1.first << " " << p1.second << std::endl;
    std::cout << p2.first << " " << p2.second << std::endl;

    return 0;
}