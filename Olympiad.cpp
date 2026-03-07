#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int prog[5000], math[5000], pe[5000];
    int c1 = 0, c2 = 0, c3 = 0;

    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;

        if(t == 1){
            prog[c1] = i;
            c1++;
        }
        
        else if(t == 2){
            math[c2] = i;
            c2++;
        }
        
        else{
            pe[c3] = i;
            c3++;
        }
    }

    int w = min(c1, min(c2, c3));
    cout << w << endl;

    for(int i = 0; i < w; i++){
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}
