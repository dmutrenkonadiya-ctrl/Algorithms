#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <string>

using namespace std;

// --- Insertion Sort ---
template<typename T>
void insertion_sort(vector<T> v) {
    for (int i = 1; i < (int)v.size(); i++) {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

// --- Quick Sort ---
template<typename T>
int partition(vector<T>& v, int low, int high) {
    T pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
        if (v[j] <= pivot) swap(v[++i], v[j]);
    swap(v[i + 1], v[high]);
    return i + 1;
}

template<typename T>
void quick_sort(vector<T>& v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quick_sort(v, low, pi - 1);
        quick_sort(v, pi + 1, high);
    }
}

// --- Merge Sort ---
template<typename T>
void merge_block(vector<T>& v, int low, int mid, int high) {
    vector<T> left(v.begin() + low, v.begin() + mid + 1);
    vector<T> right(v.begin() + mid + 1, v.begin() + high + 1);
    int i = 0, j = 0, k = low;
    while (i < (int)left.size() && j < (int)right.size())
        v[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];
    while (i < (int)left.size())  v[k++] = left[i++];
    while (j < (int)right.size()) v[k++] = right[j++];
}

template<typename T>
void merge_sort(vector<T>& v, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(v, low, mid);
        merge_sort(v, mid + 1, high);
        merge_block(v, low, mid, high);
    }
}

// --- std::sort ---
template<typename T>
void std_sort(vector<T> v) {
    sort(v.begin(), v.end());
}

// --- Benchmark helper ---
template<typename Func>
long long measure(Func f) {
    auto start = chrono::high_resolution_clock::now();
    f();
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::microseconds>(end - start).count();
}

// --- Generate random vector ---
vector<int> random_vector(int n) {
    vector<int> v(n);
    mt19937 rng(42);
    uniform_int_distribution<int> dist(1, 100000);
    for (auto& x : v) x = dist(rng);
    return v;
}

void run_benchmark(int n) {
    cout << "\n=== n = " << n << " ===\n";

    vector<int> base = random_vector(n);

    // Insertion sort
    {
        vector<int> v = base;
        long long t = measure([&]() { insertion_sort(v); });
        cout << "Insertion sort : " << t << " us\n";
    }

    // Quick sort
    {
        vector<int> v = base;
        long long t = measure([&]() { quick_sort(v, 0, (int)v.size() - 1); });
        cout << "Quick sort     : " << t << " us\n";
    }

    // Merge sort
    {
        vector<int> v = base;
        long long t = measure([&]() { merge_sort(v, 0, (int)v.size() - 1); });
        cout << "Merge sort     : " << t << " us\n";
    }

    // std::sort
    {
        vector<int> v = base;
        long long t = measure([&]() { std_sort(v); });
        cout << "std::sort      : " << t << " us\n";
    }
}

int main() {
    run_benchmark(100);
    run_benchmark(1000);
    run_benchmark(10000);
    return 0;
}