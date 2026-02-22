#include <iostream>
#include <string>

using namespace std;

struct Date {
    int d, m, y;
};

struct Student {
    string name;
    Date birthday;
};

int main() {
    Student st;

    cout << "Name: ";
    getline(cin, st.name);

    cout << "Birthday (dd mm yyyy): ";
    cin >> st.birthday.d >> st.birthday.m >> st.birthday.y;

    cout << "\n";
    cout << st.name << "\n";
    cout << st.birthday.d << "."
         << st.birthday.m << "."
         << st.birthday.y << "\n";

    return 0;
}
