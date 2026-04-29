#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt = 0;

    while(n.length() > 1) {
        int sum = 0;
        for(int i = 0; i < n.length(); i++) {
            sum += n[i] - '0';
        }
        n = to_string(sum);
        cnt++;
    }

    cout << cnt;
}
