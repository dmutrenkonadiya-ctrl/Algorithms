int digit_count(int n) {
    if (n < 10) {
        return 1;
    }

    return 1 + digit_count(n / 10);
}