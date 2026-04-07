#include <iostream>
#include <vector>
#include <algorithm>   // for std::lower_bound

template<typename T>
void insert_sorted(std::vector<T>& v, T value) {
    auto it = std::lower_bound(v.begin(), v.end(), value);
    v.insert(it, value);
}

int main() {
    std::vector<int> v = {2, 4, 6, 8};
    
    std::cout << "Before: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    insert_sorted(v, 5);

    std::cout << "After:  ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}