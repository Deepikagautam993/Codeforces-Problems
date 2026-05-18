#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int t[105];
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }
    int ans = 0;
    for (int d = 0; d <= n; ++d) {
        int left = a - d;
        int right = a + d;
        if (left < 1 && right > n) break;
        if (left >= 1 && right <= n) {
            if (t[left] == 1 && t[right] == 1) {
                ans += (left == right ? 1 : 2);
            }
        } else if (left >= 1) {
            if (t[left] == 1) ans++;
        } else if (right <= n) {
            if (t[right] == 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
