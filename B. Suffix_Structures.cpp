#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) j++;
        i++;
    }

    if (j == t.size()) {
        cout << "automaton";
        return 0;
    }

    vector<int> fs(26, 0), ft(26, 0);
    for (char c : s) fs[c - 'a']++;
    for (char c : t) ft[c - 'a']++;

    if (fs == ft) {
        cout << "array";
        return 0;
    }

    for (int k = 0; k < 26; k++) {
        if (fs[k] < ft[k]) {
            cout << "need tree";
            return 0;
        }
    }

    cout << "both";
    return 0;
}
