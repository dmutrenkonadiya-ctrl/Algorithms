double fast_power(double x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        double half = fast_power(x, n / 2);
        return half * half;
    }
    return x * fast_power(x, n - 1);
}