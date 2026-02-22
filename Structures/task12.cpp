#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    const int N = 3;
    Student group[N];

    // Input
    for (int i = 0; i < N; i++) {
        cout << "Student " << (i + 1) << " name: ";
        getline(cin, group[i].name);

        cout << "Score: ";
        cin >> group[i].score;
        cin.ignore();           // clear newline
    }

    // Find the best
    int bestIndex = 0;
    for (int i = 1; i < N; i++) {
        if (group[i].score > group[bestIndex].score) {
            bestIndex = i;
        }
    }

    // Output result
    cout << "\nBest student:\n";
    cout << "  Name:  " << group[bestIndex].name << endl;
    cout << "  Score: " << group[bestIndex].score << endl;

    return 0;
}
