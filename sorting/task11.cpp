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
T qs_helper(vector<T>& v, int low, int high, int k) {
    if (low == high)
        return v[low];

    int pi = partition(v, low, high);

    if (pi == k)
        return v[pi];
    else if (k < pi)
        return qs_helper(v, low, pi - 1, k);
    else
        return qs_helper(v, pi + 1, high, k);
}

template<typename T>
T quick_select(vector<T>& v, int k) {
    return qs_helper(v, 0, (int)v.size() - 1, k);
}