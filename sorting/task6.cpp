#include <iostream>
#include <vector>

template<typename T>
void insertion_sort_desc(std::vector<T>& v) {
    for (size_t i = 1; i < v.size(); ++i) {
        T key = v[i];
        size_t j = i;

        while (j > 0 && v[j - 1] < key) {
            v[j] = v[j - 1];
            --j;
        }

        v[j] = key;
    }
}

int main() {
    std::vector<int> v = {5, 2, 8, 1, 9, 3};

    std::cout << "Before: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    insertion_sort_desc(v);

    std::cout << "After (descending): ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}