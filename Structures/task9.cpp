#include <iostream>
#include <iomanip>

using namespace std;

struct Complex {
    double real;
    double imag;
};

int main() {
    Complex z1, z2;

    cout << "First number (real imag): ";
    cin >> z1.real >> z1.imag;

    cout << "Second number (real imag): ";
    cin >> z2.real >> z2.imag;

    double sum_real = z1.real + z2.real;
    double sum_imag = z1.imag + z2.imag;

    cout << "\n";
    cout << "z1 = " << z1.real;
    if (z1.imag >= 0) cout << " + " << z1.imag << "i";
    else              cout << " - " << -z1.imag << "i";
    cout << "\n";

    cout << "z2 = " << z2.real;
    if (z2.imag >= 0) cout << " + " << z2.imag << "i";
    else              cout << " - " << -z2.imag << "i";
    cout << "\n";

    cout << "--------------------\n";

    cout << "sum = " << sum_real;
    if (sum_imag >= 0) cout << " + " << sum_imag << "i";
    else               cout << " - " << -sum_imag << "i";
    cout << endl;

    return 0;
}
