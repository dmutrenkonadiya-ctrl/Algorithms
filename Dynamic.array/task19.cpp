bool equals(int_vector& a, int_vector& b) {
    if (a.size != b.size) return false;
    for (int i = 0; i < a.size; i++) {
        if (a.data[i] != b.data[i]) return false;
    }
    return true;
}