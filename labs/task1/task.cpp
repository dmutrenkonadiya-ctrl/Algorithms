#include <iostream>
using namespace std;

int main() {
int start, end;
int sum = 0;

cout << "Enter the start of the range: ";
cin >> start;
cout << "Enter the end of the range: ";
cin >> end;

if (start > end) {
    cout << "Error: The start of the range must be less than the end!" << endl;
    return 1;
}

cout << "Even numbers in the range from " << start << " до " << end << ": ";

for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
        cout << i << " ";
        sum += i;
    }
}

cout << endl;
cout << "Sum of all even numbers: " << sum << endl;

return 0;

}
