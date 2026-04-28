#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time_one = ((n + k - 1) / k) * t;

    int cakes = 0;
    int time = 0;

    while (true) {
        time++;

        if (time % t == 0) {
            cakes += k;
        }

        if (time > d && (time - d) % t == 0) {
            cakes += k;
        }

        if (cakes >= n) break;
    }

    if (time < time_one)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
