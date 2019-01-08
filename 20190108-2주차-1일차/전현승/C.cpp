#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int dp[3][1005];  // 빨, 초, 파
    int n; cin >> n;
    cin >> dp[0][0] >> dp[1][0] >> dp[2][0];
    
    for (int i = 1; i < n; i++) {
        cin >> a >> b >> c;
        dp[0][i] = min(dp[1][i - 1], dp[2][i - 1]) + a;
        dp[1][i] = min(dp[0][i - 1], dp[2][i - 1]) + b;
        dp[2][i] = min(dp[0][i - 1], dp[1][i - 1]) + c;
    }
    
    cout << min(dp[0][n - 1], min(dp[1][n - 1], dp[2][n - 1])) << '\n';
    
    return 0;
}

