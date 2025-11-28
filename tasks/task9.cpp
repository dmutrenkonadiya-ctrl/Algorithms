#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    double discount = 0.0;

    if (amount > 1000) {
        discount = 0.05;  // 5%
    }
    else if (amount > 500) {
        discount = 0.03;  // 3%
    }

    double finalPrice = amount - amount * discount;

    cout << "Final price: " << finalPrice << " UAH" << endl;

    return 0;
}
