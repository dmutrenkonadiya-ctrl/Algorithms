#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main() {
    Book b;

    cout << "Book title: ";
    getline(cin, b.title);

    cout << "Author: ";
    getline(cin, b.author);

    cout << "Publication year: ";
    
    while (!(cin >> b.year) || b.year < 0) {
        cout << "Error! Please enter a valid year (positive number): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\n\"" << b.title << "\" by " 
         << b.author << " (" << b.year << ")\n";

    return 0;
}
