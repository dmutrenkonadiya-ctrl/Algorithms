template<typename T>
void binary_insertion_sort(vector<T>& v) {
    for (int i = 1; i < (int)v.size(); i++) {
        T key = v[i];
        
        int lo = 0, hi = i;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (v[mid] <= key)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        for (int j = i; j > lo; j--)
            v[j] = v[j - 1];
        
        v[lo] = key;
    }
}