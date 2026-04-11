#include <iostream>
using namespace std;

void print_binary(int n) {
    if (n == 0)
        return;

    print_binary(n / 2);
    cout << n % 2;
}

int main() {
    int n;
    cin >> n;

    if (n == 0)
        cout << 0;
    else
        print_binary(n);

    return 0;
}