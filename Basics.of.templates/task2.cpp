#include <iostream>
using namespace std;

// For integer
void print_info(int x) {
    cout << "Number: " << x << endl;
}

// For text
void print_info(const char* text) {
    cout << "Text: " << text << endl;
}

// For character
void print_info(char c) {
    cout << "Character: " << c << endl;
}

int main() {
    print_info(10);
    print_info("Hello");
    print_info('A');

    return 0;
}