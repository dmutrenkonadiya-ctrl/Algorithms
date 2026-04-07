template<typename T>
int partition_first(vector<T>& v, int low, int high) {
    swap(v[low], v[high]);
    
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