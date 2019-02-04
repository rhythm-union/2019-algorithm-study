#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int t; cin >> t;
    while (t--) {
        int res = 0;
        int b; cin >> b;
        string s; cin >> s;
        for (char c : s) {
            if (c >= 48 && c <= 57) {
                res += (c - 48);
                res *= b;
                res %= (b - 1);
            }
        }
        cout << res << '\n';
    }
    
    return 0;
}

