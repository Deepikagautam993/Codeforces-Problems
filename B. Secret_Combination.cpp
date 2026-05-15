#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string best(n, '9'); // start with largest possible string

    // Try every cyclic rotation
    for (int r = 0; r < n; ++r) {
    	
        // rotate left by r (equivalent to right shift by n-r)
        string t = s.substr(r) + s.substr(0, r);
        
        // find increment to make first digit '0'
        int first = t[0] - '0';
        int inc = (10 - first) % 10;
        
        // apply increment
        string u;
        for (char ch : t) {
            int d = (ch - '0' + inc) % 10;
            u.push_back('0' + d);
        }
        
        // keep the lexicographically smallest
        if (u < best) {
            best = u;
        }
    }

    cout << best << endl;
    return 0;
}
