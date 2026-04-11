void shrink_to_fit() {
    if (size == capacity) return;
    int* newData = new int[size];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity = size;
}