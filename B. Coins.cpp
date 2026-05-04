#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    string coins = "ABC";

    do{
        bool ok = true;

        for(auto s : v){
            char a = s[0];
            char b = s[2];

            int posA = coins.find(a);
            int posB = coins.find(b);

            if(s[1] == '<' && posA > posB) ok = false;
            if(s[1] == '>' && posA < posB) ok = false;
        }

        if(ok){
            cout << coins << endl;
            return 0;
        }

    }while(next_permutation(coins.begin(), coins.end()));

    cout << "Impossible" << endl;
}
