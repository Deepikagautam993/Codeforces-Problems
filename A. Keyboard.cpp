#include<bits/stdc++.h>
using namespace std;

int main() {
    char direction;
    cin >> direction;
    
    string s;
    cin >> s;
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for(char c : s) {
        int pos = keyboard.find(c);
        
        if(direction == 'R') {
            cout << keyboard[pos - 1];
        } else {
            cout << keyboard[pos + 1];
        }
    }
    
    return 0;
}
