#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int n = s.length();

    if (n < 3) {
        cout << "Not a sandwich." << endl;
        return 0;
    }

    int k = (n - 1) / 2; // довжина країв

    if (2 * k + 1 != n) {
        // якщо середина не однобуквена
        cout << "Not a sandwich." << endl;
        return 0;
    }

    string left = s.substr(0, k);
    string right = s.substr(k + 1, k);
    char middle = s[k];

    if (left == right && (left.find(middle) == string::npos)) {
        cout << "This IS an ice-cream sandwich." << endl;
    } else {
        cout << "Not a sandwich." << endl;
    }

    return 0;
}
