bool is_palindrome(vector<char>& v, int left, int right) {
    if (left >= right) return true;
    if (v[left] != v[right]) return false;
    return is_palindrome(v, left + 1, right - 1);
}