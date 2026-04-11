void insert(int index, int value) {
    if (size == capacity) resize();
    for (int i = size; i > index; i--) {
        data[i] = data[i - 1];
    }
    data[index] = value;
    size++;
}