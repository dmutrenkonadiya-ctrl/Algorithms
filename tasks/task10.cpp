#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;

    vector<vector<int>> a(rows, vector<int>(cols));

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    int num = 1;

    while (top <= bottom && left <= right) {
        // зліва направо
        for (int c = left; c <= right; c++) {
            a[top][c] = num++;
        }
        top++;

        // зверху вниз
        for (int r = top; r <= bottom; r++) {
            a[r][right] = num++;
        }
        right--;

        // справа наліво
        if (top <= bottom) {
            for (int c = right; c >= left; c--) {
                a[bottom][c] = num++;
            }
            bottom--;
        }

        // знизу вверх
        if (left <= right) {
            for (int r = bottom; r >= top; r--) {
                a[r][left] = num++;
            }
            left++;
        }
    }

    // Вивід
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << a[r][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}
