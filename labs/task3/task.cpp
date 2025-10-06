#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* my_string = "It's test string.";

    size_t length = strlen(my_string);

    cout << "Line: \"" << my_string << "\"" << std::endl;
    cout << "The length of this string is: " << length << std::endl;

    return 0;
}
