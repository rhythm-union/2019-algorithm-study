#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    int c[5002], p[5002], dp[10002];
    while (true) {
        memset(c, 0, sizeof(c));
        memset(p, 0, sizeof(p));
        memset(dp, 0, sizeof(dp));
        
        double tmp;
        int n, m;
        scanf("%d %lf", &n, &tmp);
        m = (int)(tmp * 100);
        
        if (n == 0 && m == 0) break;
        
        for (int i = 1; i <= n; i++) {
            scanf("%d %lf", &c[i], &tmp);
            p[i] = (int)(tmp * 100);
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = p[i]; j <= m; j++) {
                dp[j] = max(dp[j], dp[j - p[i]] + c[i]);
            }
        }
        printf("%d\n", dp[m]);
    }
    
    return 0;
}

