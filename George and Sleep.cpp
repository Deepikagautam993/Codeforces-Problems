#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int sh=(s[0]-'0')*10+(s[1]-'0');
    int sm=(s[3]-'0')*10+(s[4]-'0');

    int th=(t[0]-'0')*10+(t[1]-'0');
    int tm=(t[3]-'0')*10+(t[4]-'0');

    int m = sh*60+sm;
    int n = th*60+tm;
    int x = m - n ;
    if(x<0){
        x+=1440;
    }
    int a = x/60;
    int b = x%60;
    if(a<10) cout<<"0";
    cout<<a<<":";
    if(b<10) cout<<"0";
    cout<<b;

    return 0 ;
}
