int main() {
    int_vector v;
    int x;
    while (cin >> x && x != 0) {
        v.push_back(x);
    }
    for (int i = v.size - 1; i >= 0; i--) {
        cout << v.data[i] << " ";
    }
    cout << endl;
    return 0;
}