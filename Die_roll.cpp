#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int target = max(Y, W);
    int favorable = 7 - target;
    int total = 6;

    int g = __gcd(favorable, total);

    cout << favorable / g << "/" << total / g;

    return 0;
}
