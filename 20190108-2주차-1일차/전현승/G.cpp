#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    while (t--) {
        int n, a[2][100001], dp[3][100001];  // 0: 위에거뗌, 1: 아래거뗌, 2: 안뗌
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        
        dp[0][0] = a[0][0];
        dp[1][0] = a[1][0];
        dp[2][0] = 0;
        
        for (int i = 1; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[2][i - 1]) + a[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + a[1][i];
            dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]);
        }
        
        cout << max(dp[0][n - 1], max(dp[1][n - 1], dp[2][n - 1])) << '\n';
    }
    
    return 0;
}

