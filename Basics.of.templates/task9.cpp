```cpp
#include <iostream>
#include <vector>

struct point {
    int x, y, z;
};

int main() {
    std::vector<point> points = {{0, 0, 0}, {1, 1, 1}, {-5, 3, 2}};

    std::cout << "Initial list of points:" << std::endl;
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ", " << p.z << ")" << std::endl;
    }

    point newPoint;
    std::cout << "\nEnter new point (x y z): ";
    std::cin >> newPoint.x >> newPoint.y >> newPoint.z;
    points.push_back(newPoint);

    std::cout << "\nUpdated list of points:" << std::endl;
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ", " << p.z << ")" << std::endl;
    }

    return 0;
}
```