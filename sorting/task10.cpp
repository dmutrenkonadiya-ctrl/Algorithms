template<typename T>
int partition(vector<T>& v, int low, int high) {
    T pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}

template<typename T>
void qs_helper(vector<T>& v, int low, int high, int& count) {
    if (low < high) {
        int pi = partition(v, low, high);
        
        count++;  // left recursive call
        qs_helper(v, low, pi - 1, count);
        
        count++;  // right recursive call
        qs_helper(v, pi + 1, high, count);
    }
}

template<typename T>
int quick_sort_count(vector<T>& v) {
    int count = 0;
    qs_helper(v, 0, (int)v.size() - 1, count);
    return count;
}