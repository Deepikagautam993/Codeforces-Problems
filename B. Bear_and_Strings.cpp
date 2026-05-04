#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    long long ans = 0;
    int last = -1;

    for(int i = 0; i <= n - 4; i++){
        if(s.substr(i, 4) == "bear"){
            ans += (long long)(i - last) * (n - (i + 3));
            last = i;
        }
    }

    cout << ans << endl;
    return 0;
}
