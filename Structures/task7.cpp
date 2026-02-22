#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int toSeconds(Time t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

int main() {
    Time t1, t2;

    // input first time
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    // input second time
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    int diff = abs(toSeconds(t1) - toSeconds(t2));

    cout << diff << endl;

    return 0;
}
