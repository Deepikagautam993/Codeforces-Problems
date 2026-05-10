#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, vector<int>> pos;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }

    vector<pair<int, int>> ans;

    for (auto &it : pos) {
        int x = it.first;
        vector<int> &v = it.second;

        if (v.size() == 1) {
            ans.push_back({x, 0});
        }
        else {
            int diff = v[1] - v[0];
            bool ok = true;

            for (int i = 2; i < v.size(); i++) {
                if (v[i] - v[i - 1] != diff) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                ans.push_back({x, diff});
            }
        }
    }

    cout << ans.size() << endl;

    for (auto &p : ans) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}8
1 2 1 3 1 2 1 5

