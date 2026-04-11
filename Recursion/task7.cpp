template<typename T>
void recursive_reverse(vector<T>& v, int left, int right) {
    if (left >= right) return;
    swap(v[left], v[right]);
    recursive_reverse(v, left + 1, right - 1);
}