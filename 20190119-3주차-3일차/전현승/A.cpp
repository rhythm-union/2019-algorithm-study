#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int L[22], J[22], dp[22][102] = {0, };  // dp[i][j] : 짐이 i종류까지 있고, 무게 상한이 j일 때 최대 가치 => 답은 dp[n][99]이 된다
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> L[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> J[i];
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 99; j++) {
            dp[i][j] = dp[i - 1][j];
        }
        for (int j = L[i]; j <= 99; j++) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j - L[i]] + J[i]);
        }
    }
    
    cout << dp[n][99] << '\n';
    
    return 0;
}

