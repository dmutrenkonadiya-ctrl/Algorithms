#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\nВведіть будь-яке число: ";
    double user_number;
    cin >> user_number;

    string user_str = std::to_string(user_number);

    cout << "Ви ввели число " << user_number << ", яке як рядок виглядає так: " << user_str << std::endl;

    return 0;
}
