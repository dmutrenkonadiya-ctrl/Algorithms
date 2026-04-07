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

int main() {
    point p{5, 10};
    cout << p;  
    return 0;
}