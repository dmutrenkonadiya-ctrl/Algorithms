void subsets(vector<int>& v, vector<int>& current, int index) {
    cout << "{";
    for (int i = 0; i < current.size(); i++) {
        if (i > 0) cout << ",";
        cout << current[i];
    }
    cout << "}" << endl;

    for (int i = index; i < v.size(); i++) {
        current.push_back(v[i]);
        subsets(v, current, i + 1);
        current.pop_back();
    }
}