#include <iostream>

using namespace std;

struct Point { double x, y; };
struct Rectangle { Point bl, tr; };

int main()
{
    Rectangle r;
    cin >> r.bl.x >> r.bl.y >> r.tr.x >> r.tr.y;

    double area = (r.tr.x - r.bl.x) * (r.tr.y - r.bl.y);

    cout << area << endl;

    return 0;
}
