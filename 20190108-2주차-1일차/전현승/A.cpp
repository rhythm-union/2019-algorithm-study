#include <bits/stdc++.h>
using namespace std;

int main() {
    int dp[50] = {0, 1};
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }
    
    cout << dp[n] << '\n';
    
    return 0;
}

