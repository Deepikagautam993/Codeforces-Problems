#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        s.insert(a);
    }
    vector<int> v(s.begin(), s.end());
    if (v.size() > 3) {
        cout << "NO" << endl;
    } else if (v.size() <= 2) {
        cout << "YES" << endl;
    } else {
        // v.size() == 3
        if (v[1] - v[0] == v[2] - v[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
