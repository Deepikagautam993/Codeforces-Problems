#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;

    while(n--) {
        string s;
        cin >> s;

        bool digit[10] = {false};

        // mark digits present
        for(int i = 0; i < s.length(); i++) {
            digit[s[i] - '0'] = true;
        }

        bool good = true;

        // check 0 to k
        for(int d = 0; d <= k; d++) {
            if(!digit[d]) {
                good = false;
                break;
            }
        }

        if(good)
            count++;
    }

    cout << count;

    return 0;
}
