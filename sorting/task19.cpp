#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
    int id;
    int age;
    double grade;
};

// a) Sort by grade descending
bool compare_by_grade_desc(const student& a, const student& b) {
    return a.grade > b.grade;
}

// b) Sort by age ascending
bool compare_by_age(const student& a, const student& b) {
    return a.age < b.age;
}

void print(const vector<student>& v, const string& label) {
    cout << label << "\n";
    for (const auto& s : v)
        cout << "  id=" << s.id << " age=" << s.age << " grade=" << s.grade << "\n";
}

int main() {
    vector<student> students = {
        {1, 20, 85.5},
        {2, 22, 91.0},
        {3, 19, 78.0},
        {4, 21, 91.0},
        {5, 18, 88.5}
    };

    // a) by grade descending
    vector<student> by_grade = students;
    sort(by_grade.begin(), by_grade.end(), compare_by_grade_desc);
    print("Sorted by grade (desc):", by_grade);

    // b) by age ascending
    vector<student> by_age = students;
    sort(by_age.begin(), by_age.end(), compare_by_age);
    print("Sorted by age (asc):", by_age);

    // Bonus: lambda versions
    vector<student> by_grade_lambda = students;
    sort(by_grade_lambda.begin(), by_grade_lambda.end(),
        [](const student& a, const student& b) {
            return a.grade > b.grade;
        });

    return 0;
}