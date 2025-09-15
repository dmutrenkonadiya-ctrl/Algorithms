#include <bits/stdc++.h>
using namespace std;

int sum3digits(int x) {

    int s = 0;
    s += x % 10; x /= 10;
    s += x % 10; x /= 10;
    s += x % 10;
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> sum(1000);
    for (int i = 0; i < 1000; ++i) sum[i] = sum3digits(i);

    long long count = 0;


    for (int a = 0; a < 1000; ++a) {
        for (int b = 0; b < 1000; ++b) {
            if (sum[a] == sum[b]) {

                printf("%03d%03d\n", a, b);
                ++count;
            }
        }
    }


    cerr << "Total lucky tickets: " << count << "\n";
    return 0;
}
