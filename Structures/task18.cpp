#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
};

struct Order {
    Product item;
    int quantity;
};

int main()
{
    Order order;

    cout << "Product name: ";
    getline(cin, order.item.name);

    cout << "Price per unit: ";
    cin >> order.item.price;

    cout << "Quantity: ";
    cin >> order.quantity;

    double total = order.item.price * order.quantity;

    cout << "\n";
    cout << "Order details:\n";
    cout << "──────────────────────────────\n";
    cout << "Product:     " << order.item.name << endl;
    cout << "Unit price:  " << fixed << setprecision(2) << order.item.price << endl;
    cout << "Quantity:    " << order.quantity << endl;
    cout << "──────────────────────────────\n";
    cout << "Total cost:  " << fixed << setprecision(2) << total << endl;

    return 0;
}
