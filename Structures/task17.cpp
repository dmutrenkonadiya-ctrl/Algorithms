#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Segment {
    Point a;
    Point b;
};

double distance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Segment s;

    cout << "Enter start point (x y): ";
    cin >> s.a.x >> s.a.y;

    cout << "Enter end point (x y):   ";
    cin >> s.b.x >> s.b.y;

    double len = distance(s.a, s.b);

    cout << "\n";
    cout << "Length of segment: " << fixed << setprecision(4) << len << endl;

    return 0;
}
