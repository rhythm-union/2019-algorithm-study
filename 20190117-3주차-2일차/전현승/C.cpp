#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    pair<int, int> p[101];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    
    sort(p, p + n);
    
    int dp[101];
    
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (p[j].second < p[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    cout << n - *max_element(dp, dp + n) << '\n';
    
    return 0;
}

