#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    string cmd;
    int arg;
    unsigned long long s = 0;
    int m; cin >> m;
    while (m--) {
        cin >> cmd;
        if (cmd == "add") {
            cin >> arg;
            s |= (1 << (arg - 1));
        } else if (cmd == "remove") {
            cin >> arg;
            s &= ~(1 << (arg - 1));
        } else if (cmd == "check") {
            cin >> arg;
            cout << (s & (1 << (arg - 1)) ? 1 : 0) << '\n';
        } else if (cmd == "toggle") {
            cin >> arg;
            s ^= (1 << (arg - 1));
        } else if (cmd == "all") {
            s = (1 << 20) - 1;
        } else if (cmd == "empty") {
            s = 0;
        }
    }
    
    return 0;
}

