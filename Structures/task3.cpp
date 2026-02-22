#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p;

    cout << "Enter x coordinate: ";
    cin >> p.x;

    cout << "Enter y coordinate: ";
    cin >> p.y;

    double distance = sqrt(p.x * p.x + p.y * p.y);

    cout << fixed << setprecision(4);

    cout << "\nPoint: (" << p.x << ", " << p.y << ")\n";
    cout << "Distance from (0,0): " << distance << endl;

    return 0;
}
