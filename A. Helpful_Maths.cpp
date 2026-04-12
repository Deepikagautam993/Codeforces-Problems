#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    char a[100];
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            a[count] = s[i];
            count++;
        }
    }
    sort(a, a + count);
    for(int i = 0; i < count; i++) {
        cout << a[i];
        if(i != count - 1)
            cout << "+";
    }
    return 0;
}
