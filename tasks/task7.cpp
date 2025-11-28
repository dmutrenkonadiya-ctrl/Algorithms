#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double alpha_deg, alpha_rad, v;

    cout << "Enter angle (degrees): ";
    cin >> alpha_deg;

    cout << "Enter velocity: ";
    cin >> v;

    const double g = 9.81;

    // Переведення градусів у радіани
    alpha_rad = alpha_deg * M_PI / 180.0;

    // Формула дальності
    double R = (v * v * sin(2 * alpha_rad)) / g;

    cout << "Distance: " << R << " meters" << endl;

    return 0;
}
