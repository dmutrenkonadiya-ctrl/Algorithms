template<typename T>
bool recursive_is_sorted(vector<T>& v, int index) {
    if (index >= v.size() - 1) return true;
    if (v[index] > v[index + 1]) return false;
    return recursive_is_sorted(v, index + 1);
}