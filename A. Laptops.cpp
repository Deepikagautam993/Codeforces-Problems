
// time limit exceeded in this approach
//#include<bits/stdc++.h>
//int main(){
    //using namespace std;
    //int n;
    //cin >> n;
    // vector<pair<int,int>> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i].first >> v[i].second;
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(v[i].first < v[j].first && v[i].second > v[j].second){
    //             cout << "Happy Alex";
    //             return 0;
    //         }
    //     }
    // }
//     cout << "Poor Alex";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for(int i = 1; i < n; i++){
        if(v[i].second < v[i-1].second){
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
}
