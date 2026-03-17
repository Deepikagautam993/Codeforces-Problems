#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true;  // true = Sereja, false = Dima

    while(l <= r) {
        if(a[l] > a[r]) {
            if(turn)
                sereja += a[l];
            else
                dima += a[l];
            l++;
        } else {
            if(turn)
                sereja += a[r];
            else
                dima += a[r];
            r--;
        }

        turn = !turn;  // change turn
    }

    cout << sereja << " " << dima;

    return 0;
}
