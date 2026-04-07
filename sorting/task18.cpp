#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// Quicksort with last element as pivot
int partition(vector<int>& v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
        if (v[j] <= pivot) swap(v[++i], v[j]);
    swap(v[i + 1], v[high]);
    return i + 1;
}

void quick_sort(vector<int>& v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quick_sort(v, low, pi - 1);
        quick_sort(v, pi + 1, high);
    }
}

template<typename Func>
long long measure(Func f) {
    auto start = chrono::high_resolution_clock::now();
    f();
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::microseconds>(end - start).count();
}

int main() {
    int n = 5000;

    // --- Worst case: already sorted array ---
    // Pivot (last element) is always the maximum
    // Partition produces: [] + [pivot] + [all others]
    // Recursion depth = n, each level does O(n) work => O(n^2)
    vector<int> worst(n);
    for (int i = 0; i < n; i++) worst[i] = i + 1;  // {1, 2, 3, ..., n}

    // --- Best case: same size but random ---
    vector<int> best(n);
    for (int i = 0; i < n; i++) best[i] = i + 1;
    // shuffle with fixed seed
    srand(42);
    for (int i = n - 1; i > 0; i--)
        swap(best[i], best[rand() % (i + 1)]);

    long long t_worst = measure([&]() { quick_sort(worst, 0, n - 1); });
    long long t_best  = measure([&]() { quick_sort(best,  0, n - 1); });

    cout << "n = " << n << "\n";
    cout << "Worst case (sorted array) : " << t_worst << " us\n";
    cout << "Average case (random)     : " << t_best  << " us\n";
    cout << "Ratio                     : " << (double)t_worst / t_best << "x slower\n";

    // Visualize partition imbalance
    cout << "\nWorst case partition trace (n=8, sorted input):\n";
    cout << "