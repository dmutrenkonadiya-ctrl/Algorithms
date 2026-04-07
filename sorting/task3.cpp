#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void bubble_sort_range(vector<T>& v, int left, int right) {
    for (int i = left; i < right; i++) {
        for (int j = left; j < right - (i - left); j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}