void remove_all(int value) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] != value) {
            data[newSize++] = data[i];
        }
    }
    size = newSize;
}