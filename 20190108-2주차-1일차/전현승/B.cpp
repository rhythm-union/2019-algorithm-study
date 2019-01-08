#include <bits/stdc++.h>
using namespace std;

int main() {
    int dp[1005] = {1, 2};
    int n; cin >> n;
    
    for (int i = 2; i < n; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
        dp[i] %= 10007;
    }
    
    cout << dp[n - 1] << '\n';
    
    return 0;
}

