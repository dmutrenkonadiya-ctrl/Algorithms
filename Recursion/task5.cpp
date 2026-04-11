#include <iostream>
#include <vector>
using namespace std;

template<typename T>
T recursive_max(vector<T>& v, int index) {
    if (index == v.size() - 1)
        return v[index];

    T max_rest = recursive_max(v, index + 1);

    return (v[index] > max_rest) ? v[index] : max_rest;
}

int main() {
    vector<int> v = {3, 7, 2, 9, 4};

    cout << recursive_max(v, 0);

    return 0;
}