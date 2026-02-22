#include <iostream>

using namespace std;

struct Rectangle {
    double width;
    double height;
};

int main() {
    Rectangle r;
    cin >> r.width >> r.height;

    cout << "Area:      " << r.width * r.height << endl;
    cout << "Perimeter: " << 2 * (r.width + r.height) << endl;

    return 0;
}
