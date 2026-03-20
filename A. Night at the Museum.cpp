#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char start = 'a';
    int moves = 0;
    for(int  i = 0 ; i<s.length() ; i++){
        int diff = abs(s[i] - start);
        moves += min(diff , 26-diff);
        start = s[i];
    }
    cout<<moves;
}
