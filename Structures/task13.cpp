#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    double score;
};

int main() {
    Student s1, s2, s3;

    // Input
    cout << "Student 1 name: ";
    getline(cin, s1.name);
    cout << "Score: ";
    cin >> s1.score;
    cin.ignore();

    cout << "Student 2 name: ";
    getline(cin, s2.name);
    cout << "Score: ";
    cin >> s2.score;
    cin.ignore();

    cout << "Student 3 name: ";
    getline(cin, s3.name);
    cout << "Score: ";
    cin >> s3.score;
    cin.ignore();

    double total = s1.score + s2.score + s3.score;
    double avg = total / 3.0;

    // Output
    cout << "\n";
    cout << "Average score of the group: " << fixed << setprecision(2) << avg << endl;

    return 0;
}
