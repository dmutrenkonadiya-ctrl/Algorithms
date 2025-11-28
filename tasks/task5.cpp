#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;

    int num = 1;

    for (int r = 0; r < rows; r++) {
        if (r % 2 == 0) {
            // парний рядок (0-й, 2-й...) — рух зліва направо
            for (int c = 0; c < cols; c++) {
                cout << num++ << " ";
            }
        } else {
            // непарний рядок — рух справа наліво
            int start = num + cols - 1;
            for (int c = 0; c < cols; c++) {
                cout << start-- << " ";
            }
            num += cols; // компенсуємо збільшення
        }
        cout << "\n";
    }

    return 0;
}
