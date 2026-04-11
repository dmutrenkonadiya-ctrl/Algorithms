int count(int value) {
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] == value) cnt++;
    }
    return cnt;
}