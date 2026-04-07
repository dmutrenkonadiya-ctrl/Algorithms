template<typename T>
vector<T> merge_vectors(vector<T>& a, vector<T>& b) {
    vector<T> result;
    result.reserve(a.size() + b.size());

    int i = 0, j = 0;

    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] <= b[j])
            result.push_back(a[i++]);
        else
            result.push_back(b[j++]);
    }

    while (i < (int)a.size())
        result.push_back(a[i++]);

    while (j < (int)b.size())
        result.push_back(b[j++]);

    return result;
}