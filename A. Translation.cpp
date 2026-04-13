#include<bits/stdc++.h>
using namespace std;

int main(){
    string s , t;
    cin>>s;
    cin>>t;
    
    bool isSame = true;
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] != t[t.length() - 1 -i]){
            isSame = false;
            break;
        }
    }
    if(isSame){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
