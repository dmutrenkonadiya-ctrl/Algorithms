int find_max(int_vector& v) {
    int max = v.data[0];
    for (int i = 1; i < v.size; i++) {
        if (v.data[i] > max) max = v.data[i];
    }
    return max;
}