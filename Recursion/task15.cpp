int climb_stairs(int n) {
    vector<int> cache(n + 1, -1);

    function<int(int)> solve = [&](int k) -> int {
        if (k <= 1) return 1;
        if (cache[k] != -1) return cache[k];
        cache[k] = solve(k - 1) + solve(k - 2);
        return cache[k];
    };

    return solve(n);
}