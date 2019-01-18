#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int a[40001];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> dp;
    for (int i = 0; i < n; i++) {
        if (dp.empty() || dp.back() < a[i]) {
            dp.push_back(a[i]);
        } else {
            int idx = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
            dp[idx] = a[i];
        }
    }
    
    cout << dp.size() << '\n';
    
    return 0;
}

