#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point {
    int x;
    int y;
};

bool compare_by_distance(const point& a, const point& b) {
    return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
}

int main() {
    vector<point> points = {
        {3, 4},   // dist = 5
        {1, 1},   // dist = 1.41
        {0, 5},   // dist = 5
        {2, 2},   // dist = 2.83
        {6, 0}    // dist = 6
    };

    sort(points.begin(), points.end(), compare_by_distance);

    cout << "Sorted by distance from (0,0):\n";
    for (const auto& p : points)
        cout << "  (" << p.x << ", " << p.y << ")"
             << "  d^2 = " << p.x*p.x + p.y*p.y << "\n";

    return 0;
}