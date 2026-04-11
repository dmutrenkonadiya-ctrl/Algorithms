void erase(int index) {
    for (int i = index; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size--;
}