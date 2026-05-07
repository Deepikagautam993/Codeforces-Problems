#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int,int>> Z(p), X(q);

    for(int i = 0; i < p; i++) {
        cin >> Z[i].first >> Z[i].second;
    }

    for(int i = 0; i < q; i++) {
        cin >> X[i].first >> X[i].second;
    }

    int ans = 0;

    for(int t = l; t <= r; t++) {
        bool ok = false;

        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                int L1 = Z[i].first;
                int R1 = Z[i].second;

                int L2 = X[j].first + t;
                int R2 = X[j].second + t;

                if(max(L1, L2) <= min(R1, R2)) {
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }

        if(ok) ans++;
    }

    cout << ans << endl;
}
