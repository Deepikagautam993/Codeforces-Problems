#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int m;
    cin >> m;

    long long vasya = 0;
    long long petya = 0;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        vasya += pos[x];
        petya += (n - pos[x] + 1);
    }

    cout << vasya << " " << petya;

    return 0;
}
