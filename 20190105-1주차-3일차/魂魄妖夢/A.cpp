#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    int a, b, c;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i >= 1 && i <= 99) {
            cnt++;
        } else {
            a = i / 100;
            c = i % 10;
            b = (i - a * 100 - c) / 10;
            
            if (a - b == b - c) {
                cnt++;
            }
        }
    }
    
    cout << cnt << '\n';
    
    return 0;
}

