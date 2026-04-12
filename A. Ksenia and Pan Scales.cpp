#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, extra;
    cin >> s >> extra;

    int pos = s.find('|');

    string left = s.substr(0, pos);
    string right = s.substr(pos + 1);

    int total = left.size() + right.size() + extra.size();

    if(total % 2 != 0){
        cout << "Impossible";
        return 0;
    }

    int target = total / 2;

    int needLeft = target - left.size();
    int needRight = target - right.size();

    if(needLeft < 0 || needRight < 0){
        cout << "Impossible";
        return 0;
    }

    int i = 0;

    while(needLeft > 0){
        left += extra[i];
        i++;
        needLeft--;
    }

    while(i < extra.size()){
        right += extra[i];
        i++;
    }

    if(left.size() == right.size()){
        cout << left << "|" << right;
    } else {
        cout << "Impossible";
    }
}
