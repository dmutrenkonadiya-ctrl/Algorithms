#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Length: " << text.length() << endl;

    return 0;
}
