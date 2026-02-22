#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p1, p2;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> p2.x >> p2.y;

    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    double distance = sqrt(dx * dx + dy * dy);

    cout << fixed << setprecision(4);

    cout << "\nPoint A: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Point B: (" << p2.x << ", " << p2.y << ")\n";
    cout << "------------------------\n";
    cout << "Distance: " << distance << endl;

    return 0;
}
