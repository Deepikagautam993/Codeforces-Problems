#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    
    vector<int> pref0(len_b + 1, 0);
    for (int i = 0; i < len_b; ++i) {
        pref0[i+1] = pref0[i] + (b[i] == '0');
    }
    
    long long ans = 0;
    int range_len = len_b - len_a + 1;
    for (int i = 0; i < len_a; ++i) {
        int left = i;
        int right = i + range_len - 1;
        int zeros = pref0[right+1] - pref0[left];
        int ones = range_len - zeros;
        if (a[i] == '0') ans += ones;
        else ans += zeros;
    }
    cout << ans << endl;
    
    return 0;
}
