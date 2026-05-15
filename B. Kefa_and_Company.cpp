#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    
    vector<pair<int, int>> friends(n);
    for (int i = 0; i < n; ++i) {
        cin >> friends[i].first >> friends[i].second;
    }
    
    // Sort by money
    sort(friends.begin(), friends.end());
    
    long long maxSum = 0;
    long long currentSum = 0;
    int j = 0;
    
    for (int i = 0; i < n; ++i) {
    	
        // Expand window from the right
        while (j < n && friends[j].first - friends[i].first < d) {
            currentSum += friends[j].second;
            j++;
        }
        
        // Update answer
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        
        // Move left pointer: remove friends[i] from window
        currentSum -= friends[i].second;
    }
    
    cout << maxSum << endl;
    
    return 0;
}
