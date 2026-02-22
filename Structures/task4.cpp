#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t;
    cin >> t.hours >> t.minutes >> t.seconds;

    long total = t.hours * 3600 + t.minutes * 60 + t.seconds;

    cout << "Total seconds: " << total << endl;

    return 0;
}
