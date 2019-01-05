#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int m;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        m = i;
        s = to_string(i);
        for (char c : s) {
            m += c - 48;
        }
        
        if (m == n) {
            cout << i << '\n';
            return 0;
        }
    }
    
    cout << 0 << '\n';
    
    return 0;
}

