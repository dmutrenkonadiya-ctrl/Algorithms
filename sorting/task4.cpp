#include <iostream>
#include <vector>

template<typename T>
bool is_sorted(const std::vector<T>& v) {
    if (v.empty()) {
        return true;
    }

    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }
    return true;
}