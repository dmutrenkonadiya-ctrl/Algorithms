#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
    double width, height;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    double area = rectangleArea(width, height);

    cout << "Rectangle area: " << area << endl;

    return 0;
}
