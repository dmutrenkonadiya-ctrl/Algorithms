#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
};

ostream& operator<<(ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

istream& operator>>(istream& in, point& p) {
    in >> p.x >> p.y;
    return in;
}

int main() {
    point p;

    cin >> p;     
    cout << p;    

    return 0;
}