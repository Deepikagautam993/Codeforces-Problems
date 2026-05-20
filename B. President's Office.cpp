#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    bool has[26] = {false};
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == c) {
                for (int d = 0; d < 4; ++d) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        char ch = grid[ni][nj];
                        if (ch != '.' && ch != c) {
                            has[ch - 'A'] = true;
                        }
                    }
                }
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i < 26; ++i) {
        if (has[i]) ans++;
    }
    cout << ans << endl;
    
    return 0;
}
