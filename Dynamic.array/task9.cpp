void reserve(int n) {
    if (capacity >= n) return;
    int* newData = new int[n];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity = n;
}