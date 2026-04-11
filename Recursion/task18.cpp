bool check_brackets(const char* str, int index, int open_count) {
    if (open_count < 0) return false;
    if (str[index] == '\0') return open_count == 0;
    if (str[index] == '(') return check_brackets(str, index + 1, open_count + 1);
    if (str[index] == ')') return check_brackets(str, index + 1, open_count - 1);
    return check_brackets(str, index + 1, open_count);
}