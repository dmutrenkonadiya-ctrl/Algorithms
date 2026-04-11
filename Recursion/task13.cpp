long long fib_memo(int n, vector<long long>& cache) {
    if (n <= 1) return n;
    if (cache[n] != -1) return cache[n];
    cache[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);
    return cache[n];
}