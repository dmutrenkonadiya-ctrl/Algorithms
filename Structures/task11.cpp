#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int score;
};

bool compareByScore(const Student& a, const Student& b) {
    return a.score > b.score;
}

int main() {
    const int N = 3;
    Student group[N];

    // Введення
    for (int i = 0; i < N; i++) {
        cout << "Student " << (i+1) << " name: ";
        getline(cin, group[i].name);

        cout << "Score: ";
        cin >> group[i].score;
        cin.ignore();
    }

    // Сортування за спаданням балу
    sort(group, group + N, compareByScore);

    // Виведення таблиці
    cout << "\n";
    cout << left << setw(4) << "Rank"
         << setw(22) << "Name"
         << setw(10) << "Score"
         << endl;

    cout << string(36, '-') << endl;

    for (int i = 0; i < N; i++) {
        cout << left
             << setw(4)  << (i + 1)
             << setw(22) << group[i].name
             << setw(10) << group[i].score
             << endl;
    }

    cout << string(36, '-') << endl;

    return 0;
}
