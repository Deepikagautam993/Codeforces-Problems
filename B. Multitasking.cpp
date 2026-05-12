#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> a(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<pair<int,int>> ans;

    // Bubble sort on first array
    for(int i = 0; i < m; i++) {

        for(int j = 0; j < m-1; j++) {

            bool need = false;

            // Ascending
            if(k == 0 && a[0][j] > a[0][j+1]) {
                need = true;
            }

            // Descending
            if(k == 1 && a[0][j] < a[0][j+1]) {
                need = true;
            }

            if(need) {

                ans.push_back({j+1, j+2});

                // Apply operation on all arrays
                for(int r = 0; r < n; r++) {

                    if(k == 0) {
                        if(a[r][j] > a[r][j+1]) {
                            swap(a[r][j], a[r][j+1]);
                        }
                    }
                    else {
                        if(a[r][j] < a[r][j+1]) {
                            swap(a[r][j], a[r][j+1]);
                        }
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;

    for(auto p : ans) {
        cout << p.first << " " << p.second << endl;
    }
}
