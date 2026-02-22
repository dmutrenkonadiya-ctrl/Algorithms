#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product p1, p2, p3;

    // Item 1
    cout << "Item 1 name:     "; getline(cin, p1.name);
    cout << "Item 1 price:    "; cin >> p1.price;
    cout << "Item 1 quantity: "; cin >> p1.quantity; cin.ignore();

    // Item 2
    cout << "\nItem 2 name:     "; getline(cin, p2.name);
    cout << "Item 2 price:    "; cin >> p2.price;
    cout << "Item 2 quantity: "; cin >> p2.quantity; cin.ignore();

    // Item 3
    cout << "\nItem 3 name:     "; getline(cin, p3.name);
    cout << "Item 3 price:    "; cin >> p3.price;
    cout << "Item 3 quantity: "; cin >> p3.quantity;

    double total = (p1.price * p1.quantity) +
                   (p2.price * p2.quantity) +
                   (p3.price * p3.quantity);

    cout << "\n";
    cout << "Total warehouse value: "
         << fixed << setprecision(2) << total << endl;

    return 0;
}
