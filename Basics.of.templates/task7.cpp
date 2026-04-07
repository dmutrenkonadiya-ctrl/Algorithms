#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;

    void print() {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            if (i > 0) std::cout << ", ";
            std::cout << data[i];
        }
        std::cout << "]";
    }
};

int main() {
    vector<int> v = {1, 2, 3};     

    return 0;
}