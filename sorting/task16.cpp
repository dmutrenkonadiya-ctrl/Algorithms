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
vector<int> find_runs(vector<T>& v) {
    vector<int> runs;
    runs.push_back(0);  // start of first run

    for (int i = 1; i < (int)v.size(); i++)
        if (v[i] < v[i - 1])
            runs.push_back(i);  // start of new run

    runs.push_back((int)v.size());  // sentinel
    return runs;
}

template<typename T>
void natural_merge_sort(vector<T>& v) {
    if (v.size() <= 1) return;

    while (true) {
        vector<int> runs = find_runs(v);

        // Already sorted — only one run
        if (runs.size() <= 2) break;

        // Merge adjacent pairs of runs
        for (int i = 0; i + 2 < (int)runs.size(); i += 2) {
            int low  = runs[i];
            int mid  = runs[i + 1] - 1;
            int high = runs[i + 2] - 1;
            merge_block(v, low, mid, high);
        }
    }
}