#include <iostream>
using namespace std;
int main() {
    char a[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            int black = 0;
            int white = 0;

            if(a[i][j] == '#') black++;
            else white++;

            if(a[i][j+1] == '#') black++;
            else white++;

            if(a[i+1][j] == '#') black++;
            else white++;

            if(a[i+1][j+1] == '#') black++;
            else white++;

            if(black >= 3 || white >= 3){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
