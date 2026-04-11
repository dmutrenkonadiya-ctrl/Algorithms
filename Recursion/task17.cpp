template<typename T>
void recursive_selection_sort(vector<T>& v, int start) {
    if (start >= v.size() - 1) return;

    int minIdx = start;
    for (int i = start + 1; i < v.size(); i++) {
        if (v[i] < v[minIdx]) minIdx = i;
    }

    swap(v[start], v[minIdx]);
    recursive_selection_sort(v, start + 1);
}