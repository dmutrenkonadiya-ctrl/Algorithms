void reverse() {
    int left = 0, right = size - 1;
    while (left < right) {
        swap(data[left], data[right]);
        left++;
        right--;
    }
}