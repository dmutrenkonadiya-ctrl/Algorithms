int count_paths(int m, int n) {
    vector<vector<int>> cache(m, vector<int>(n, -1));

    function<int(int, int)> solve = [&](int r, int c) -> int {
        if (r == 0 || c == 0) return 1;
        if (cache[r][c] != -1) return cache[r][c];
        cache[r][c] = solve(r - 1, c) + solve(r, c - 1);
        return cache[r][c];
    };

    return solve(m - 1, n - 1);
}