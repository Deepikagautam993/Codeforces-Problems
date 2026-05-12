#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Convert negatives to positives
    for (int i = 0; i < n && k > 0; i++) {
        if (a[i] < 0) {
            a[i] = -a[i];
            k--;
        }
    }

    // Find minimum absolute value
    int mn = abs(a[0]);
    int idx = 0;

    for (int i = 1; i < n; i++) {
        if (abs(a[i]) < mn) {
            mn = abs(a[i]);
            idx = i;
        }
    }

    // If k is odd, flip smallest absolute value
    if (k % 2 == 1) {
        a[idx] = -a[idx];
    }

    long long sum = 0;

    for (int x : a) {
        sum += x;
    }

    cout << sum;

    return 0;
}
