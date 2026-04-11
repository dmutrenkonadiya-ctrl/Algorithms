struct char_vector {
    char* data;
    int size;
    int capacity;

    void print_string() {
        for (int i = 0; i < size; i++) {
            cout << data[i];
        }
        cout << endl;
    }
};