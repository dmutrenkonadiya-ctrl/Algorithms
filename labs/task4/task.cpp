#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\nEnter any number: ";
    double user_number;
    cin >> user_number;

    string user_str = std::to_string(user_number);

    cout << "You entered a number " << user_number << ", which as a string looks like this: " << user_str << std::endl;

    return 0;
}
