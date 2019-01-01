#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << ((int)*(s.end() - 1) % 2 ? "odd" : "even") << '\n';
    }
    
    return 0;
}

