#include <bits/stdc++.h>
using namespace std;

int value[22][302], dp[22][302], parent[22][302];  // value[i][j] : 기업 i에 j만원 투자했을 때 얻는 이익

void bt(int x, int y){
    if (x > 0) bt(x - 1, parent[x][y]);
    cout << y - parent[x][y] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        for (int j = 0; j < m; j++) {
            cin >> value[j][i];
        }
    }
    
    for (int i = 0; i <= n; i++) {
        dp[0][i] = value[0][i];
    }
    
    for (int i = 1; i < m; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= j; k++) {
                if (dp[i][j] < dp[i - 1][k] + value[i][j - k]) {
                    dp[i][j] = dp[i - 1][k] + value[i][j - k];
                    parent[i][j] = k;
                }
            }
        }
    }
    
    cout << dp[m - 1][n] << '\n';
    bt(m - 1, n);
    
    return 0;
}

