#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
};

void showMoreExpensive(const Product& p1, const Product& p2) {
    cout << fixed << setprecision(2);
    cout << p1.name << ": " << p1.price << " UAH\n";
    cout << p2.name << ": " << p2.price << " UAH\n";

    if (p1.price > p2.price + 0.001) {
        cout << p1.name << " is more expensive\n";
    } else if (p2.price > p1.price + 0.001) {
        cout << p2.name << " is more expensive\n";
    } else {
        cout << "Prices are equal (or almost equal)\n";
    }
}

int main() {
    Product first, second;

    cout << "Product 1 name: ";
    getline(cin, first.name);
    cout << "Product 1 price: ";
    cin >> first.price;
    cin.ignore();

    cout << "Product 2 name: ";
    getline(cin, second.name);
    cout << "Product 2 price: ";
    cin >> second.price;

    cout << "\nComparison:\n";
    showMoreExpensive(first, second);

    return 0;
}
