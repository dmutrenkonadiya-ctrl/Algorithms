#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // верхня частина
    for (int i = 1; i <= n; i += 2) {
        int spaces = (n - i) / 2;
        for (int s = 0; s < spaces; s++) cout << " ";

        for (int star = 0; star < i; star++) {
            cout << "*";
            if (star < i - 1) cout << " ";
        }
        cout << "\n";
    }

    // нижня частина
    for (int i = n - 2; i >= 1; i -= 2) {
        int spaces = (n - i) / 2;
        for (int s = 0; s < spaces; s++) cout << " ";

        for (int star = 0; star < i; star++) {
            cout << "*";
            if (star < i - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
