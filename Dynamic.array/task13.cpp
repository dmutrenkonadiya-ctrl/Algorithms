void unique() {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || data[i] != data[i - 1]) {
            data[newSize++] = data[i];
        }
    }
    size = newSize;
}