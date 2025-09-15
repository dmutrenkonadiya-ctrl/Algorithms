#include <iostream>
using namespace std;

int main() {
int value;
cout << "enter an number:";
cin >> value;
if (value > 0) {
cout << "number is +" << endl;
}
else if (value < 0) {
cout << "number is minus" << endl;
}
else{
cout <<"The number is null" << endl;
}

return 0;
}
