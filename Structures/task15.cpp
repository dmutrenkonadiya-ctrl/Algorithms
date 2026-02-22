#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
};

int main()
{
    Product p1, p2, p3;

    // Введення першого товару
    cout << "Product 1 name: ";
    getline(cin, p1.name);
    cout << "Price: ";
    cin >> p1.price;
    cin.ignore();

    // Введення другого товару
    cout << "\nProduct 2 name: ";
    getline(cin, p2.name);
    cout << "Price: ";
    cin >> p2.price;
    cin.ignore();

    // Введення третього товару
    cout << "\nProduct 3 name: ";
    getline(cin, p3.name);
    cout << "Price: ";
    cin >> p3.price;

    // Знаходимо найдешевший
    const Product* cheapest = &p1;

    if (p2.price < cheapest->price) cheapest = &p2;
    if (p3.price < cheapest->price) cheapest = &p3;

    // Виведення результату
    cout << "\n";
    cout << "Cheapest product:\n";
    cout << "  " << cheapest->name
         << "   " << fixed << setprecision(2) << cheapest->price << endl;

    return 0;
}
