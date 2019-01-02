#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    int maxval = 0, val;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        val = 0;
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);
        if (a[0] == a[3]) {
            val = 50000 + a[0] * 5000;
        } else if (a[0] == a[1] && a[0] == a[2]) {
            val = 10000 + a[0] * 1000;
        } else if (a[1] == a[2] && a[1] == a[3]) {
            val = 10000 + a[1] * 1000;
        } else if (a[0] == a[1] && a[2] == a[3]) {
            val = 2000 + (a[0] + a[2]) * 500;
        } else if (a[0] == a[1]) {
            val = 1000 + a[0] * 100;
        } else if (a[1] == a[2]) {
            val = 1000 + a[1] * 100;
        } else if (a[2] == a[3]) {
            val = 1000 + a[2] * 100;
        } else {
            val = a[3] * 100;
        }
        
        maxval = max(maxval, val);
    }
    
    cout << maxval << '\n';
    
    return 0;
}

