#include <iostream>
#include <string>

using namespace std;

struct Date { int d, m, y; };
struct Time { int h, m; };
struct Event { string title; Date date; Time time; };

int main()
{
    Event e;
    getline(cin, e.title);
    cin >> e.date.d >> e.date.m >> e.date.y;
    cin >> e.time.h >> e.time.m;

    cout << e.title << "  "
         << e.date.d << "." << e.date.m << "." << e.date.y << "  "
         << e.time.h << ":" << e.time.m << "\n";

    return 0;
}
