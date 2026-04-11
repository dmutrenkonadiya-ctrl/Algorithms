void concat(int_vector& dst, int_vector& src) {
    for (int i = 0; i < src.size; i++) {
        dst.push_back(src.data[i]);
    }
}