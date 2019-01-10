#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int l, n;
        int pos[1000001];
        int fastest, latest;
        double min_median = 5000000;
        
        cin >> l >> n;
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }
        
        if (n == 1) {
            cout << min(pos[0], l - pos[0]) << ' ' << max(pos[0], l - pos[0]) << '\n';
        } else {
            sort(pos, pos + n);
            
            // 중간에서 가장 가까운 값
            for (int i = 0; i < n; i++) {
                if (abs((double)l / 2 - pos[i]) < min_median) {
                    min_median = abs((double)l / 2 - pos[i]);
                    fastest = pos[i];
                }
            }
            
            if (fastest > (double)l / 2) {
                fastest = l - fastest;
            }
            
            latest = max(l - pos[0], pos[n - 1]);
            
            cout << fastest << ' ' << latest << '\n';
        }
    }
    
    return 0;
}

