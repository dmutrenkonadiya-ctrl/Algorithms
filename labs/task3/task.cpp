#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* my_string = "It's test string.";

    size_t length = strlen(my_string);

    cout << "Рядок: \"" << my_string << "\"" << std::endl;
    cout << "Довжина цього рядка: " << length << std::endl;

    return 0;
}
