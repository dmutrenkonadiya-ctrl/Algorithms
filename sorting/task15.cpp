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
void merge_sort_iterative(vector<T>& v) {
    int n = (int)v.size();

    // size: block size (1, 2, 4, 8, ...)
    for (int size = 1; size < n; size *= 2) {
        // low: start of left block
        for (int low = 0; low < n - size; low += 2 * size) {
            int mid  = low + size - 1;
            int high = min(low + 2 * size - 1, n - 1);
            merge_block(v, low, mid, high);
        }
    }
}