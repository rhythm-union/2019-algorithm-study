#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool succeed;
    int n; cin >> n;
    while (true) {
        succeed = true;
        s = to_string(n);
        for (char c : s) {
            if (c != '4' && c != '7') {
                succeed = false;
            }
        }
        if (succeed) {
            cout << n << '\n';
            break;
        }
        n--;
    }
    
    return 0;
}
