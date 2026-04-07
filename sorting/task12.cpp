template<typename T>
void partition_3way(vector<T>& v, int low, int high, int& lt, int& gt) {
    T pivot = v[low];
    lt = low;   // v[low..lt-1] < pivot
    gt = high;  // v[gt+1..high] > pivot
    int i = low;

    while (i <= gt) {
        if (v[i] < pivot) {
            swap(v[lt], v[i]);
            lt++;
            i++;
        } else if (v[i] > pivot) {
            swap(v[i], v[gt]);
            gt--;
        } else {
            i++;
        }
    }
}