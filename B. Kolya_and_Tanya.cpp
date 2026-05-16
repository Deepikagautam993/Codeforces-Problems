#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long powmod(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    long long total = powmod(27, n);
    long long bad = powmod(7, n);
    long long ans = (total - bad + MOD) % MOD;
    cout << ans << endl;
    return 0;
}
