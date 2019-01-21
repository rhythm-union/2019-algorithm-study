#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int w[3404], d[3404], dp[2][12882] = {0, };
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> d[i];
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i % 2][j] = dp[1 - i % 2][j];
        }
        for (int j = w[i]; j <= m; j++) {
            dp[i % 2][j] = max(dp[i % 2][j], dp[1 - i % 2][j - w[i]] + d[i]);
        }
    }
    
    cout << dp[n % 2][m] << '\n';
    
    return 0;
}

