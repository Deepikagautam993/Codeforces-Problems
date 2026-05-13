#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    // Read the arrays (not needed for the sorting network)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
        }
    }
    
    // Number of comparators in a bubble sort network
    int p = m * (m - 1) / 2;
    cout << p << "\n";
    
    if (k == 0) {
        // Ascending order: bubble sort from left to right
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j <= m - i; ++j) {
                cout << j << " " << j + 1 << "\n";
            }
        }
    } else {
        // Descending order: bubble sort from right to left (swap indices)
        for (int i = 1; i < m; ++i) {
            for (int j = m; j > i; --j) {
                cout << j << " " << j - 1 << "\n";
            }
        }
    }
    
    return 0;
}
