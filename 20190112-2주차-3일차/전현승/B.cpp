#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, v; cin >> a >> b >> v;
    cout << (v - b - 1) / (a - b) + 1 << '\n';
    
    return 0;
}

