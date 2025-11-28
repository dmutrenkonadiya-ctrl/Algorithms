#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    double D = b*b - 4*a*c; // дискримінант

    cout << "Discriminant = " << D << endl;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Two real roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2*a);
        cout << "One real root:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        cout << "No real roots (D < 0)." << endl;
    }

    return 0;
}
