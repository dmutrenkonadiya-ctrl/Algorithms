#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product p;
    
    cout << "Name: ";
    getline(cin, p.name);
    
    cout << "Price: ";
    cin >> p.price;
    
    cout << "Quantity: ";
    cin >> p.quantity;
    
    cout << "\nTotal: " << p.price * p.quantity << " UAH\n";
    
    return 0;
}
