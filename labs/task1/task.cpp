#include <iostream>
using namespace std;

int main() {
int start, end;
int sum = 0;

cout << "Введіть початок діапазону: ";
cin >> start;
cout << "Введіть кінець діапазону: ";
cin >> end;

if (start > end) {
    cout << "Помилка: початок діапазону повинен бути менший за кінець!" << endl;
    return 1;
}

cout << "Парні числа в діапазоні від " << start << " до " << end << ": ";

for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
        cout << i << " ";
        sum += i;
    }
}

cout << endl;
cout << "Сума всіх парних чисел: " << sum << endl;

return 0;

}
