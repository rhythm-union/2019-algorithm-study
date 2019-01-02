#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;
    
    cout << (((p + t) / w) % 2 ? w - ((p + t) % w) : (p + t) % w) << ' ' << (((q + t) / h) % 2 ? h - ((q + t) % h) : (q + t) % h) << '\n';
    
    return 0;
}

