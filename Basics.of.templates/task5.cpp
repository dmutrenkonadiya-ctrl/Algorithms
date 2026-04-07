#include <iostream>

struct student {
    int id;
    int age;
    double grade;
};

std::ostream& operator<<(std::ostream& out, const student& s) {
    out << "Student " << s.id 
        << " (age: " << s.age 
        << ", grade: " << s.grade << ")";
    return out;
}

int main() {
    student s = {101, 21, 5.0};
    std::cout << s << std::endl;  
    return 0;
}