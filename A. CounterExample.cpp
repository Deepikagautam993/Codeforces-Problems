#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    for (long long x = l; x + 2 <= r; x++) {
        if (x % 2 == 0) {
            cout << x << " " << x + 1 << " " << x + 2 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
