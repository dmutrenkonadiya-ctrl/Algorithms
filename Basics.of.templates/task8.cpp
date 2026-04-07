#include <iostream>

struct point {
    int x;
    int y;
    int z;

    point(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}
};

std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}

std::istream& operator>>(std::istream& in, point& p) {
    in >> p.x >> p.y >> p.z;
    return in;
}

int main() {
    point p1(1, 2, 3);
    point p2;

    std::cout << p1 << std::endl;        

    std::cout << "Enter x y z: ";
    std::cin >> p2;
    std::cout << "You entered: " << p2 << std::endl;

    return 0;
}