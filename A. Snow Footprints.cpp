#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int r = -1, l = -1, lastR = -1;

    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            if(r == -1) r = i;
            lastR = i;
        }
        if(s[i] == 'L' && l == -1){
            l = i;
        }
    }

    if(l == -1){  
        cout << r+1 << " " << lastR+2;
    }
    else if(r == -1){
        cout << l+1 << " " << l;
    }
    else{
        cout << r+1 << " " << l;
    }
}
