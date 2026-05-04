#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> balance(n + 1, 0);

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        balance[a] -= c;
        balance[b] += c;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(balance[i] > 0) {
            ans += balance[i];
        }
    }

    cout << ans << endl;
}
