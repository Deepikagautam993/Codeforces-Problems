#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;

    for (char c : s) {
        st.insert(tolower(c));  // convert to lowercase
    }

    if (st.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
