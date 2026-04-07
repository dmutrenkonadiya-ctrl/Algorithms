template<typename T>
int insertion_sort_count(vector<T>& v) {
    int count = 0;
    for (int i = 1; i < (int)v.size(); i++) {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            count++;
            j--;
        }
        v[j + 1] = key;
    }
    return count;
}