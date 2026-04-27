#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    int distressed = 0;

    while (n--) {
        char op;
        long long d;
        cin >> op >> d;

        if (op == '+') {
            x += d;
        } else {
            if (x >= d) {
                x -= d;
            } else {
                distressed++;
            }
        }
    }

    cout << x << " " << distressed << endl;

    return 0;
}
