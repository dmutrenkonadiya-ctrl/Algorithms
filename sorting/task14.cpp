template<typename T>
int merge_count(vector<T>& v, int low, int mid, int high) {
    vector<T> left(v.begin() + low, v.begin() + mid + 1);
    vector<T> right(v.begin() + mid + 1, v.begin() + high + 1);

    int i = 0, j = 0, k = low;
    int count = 0;

    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i] <= right[j]) {
            v[k++] = left[i++];
        } else {
            // left[i..end] are all > right[j] (left is sorted)
            count += (int)left.size() - i;
            v[k++] = right[j++];
        }
    }

    while (i < (int)left.size()) v[k++] = left[i++];
    while (j < (int)right.size()) v[k++] = right[j++];

    return count;
}

template<typename T>
int merge_sort_count(vector<T>& v, int low, int high) {
    if (low >= high) return 0;

    int mid = (low + high) / 2;
    int count = 0;

    count += merge_sort_count(v, low, mid);
    count += merge_sort_count(v, mid + 1, high);
    count += merge_count(v, low, mid, high);

    return count;
}

template<typename T>
int count_inversions(vector<T>& v) {
    return merge_sort_count(v, 0, (int)v.size() - 1);
}