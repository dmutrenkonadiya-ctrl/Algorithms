#include <iostream>

using namespace std;

struct Rectangle {
    double w, h;
};

int main() {
    Rectangle a, b;
    cin >> a.w >> a.h >> b.w >> b.h;

    double areaA = a.w * a.h;
    double areaB = b.w * b.h;

    if (areaA > areaB)
        cout << "First rectangle is larger\n";
    else if (areaB > areaA)
        cout << "Second rectangle is larger\n";
    else
        cout << "Areas are equal\n";

    return 0;
}
