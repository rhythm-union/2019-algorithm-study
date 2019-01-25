#include <bits/stdc++.h>
using namespace std;

void solution(int n, int from, int to) {
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }
    
    solution(n - 1, from, 6 - from - to);
    solution(1, from, to);
    solution(n - 1, 6 - from - to, to);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    
    int dp[21] = {0, 1};
    for (int i = 2; i <= n; i++) {
        dp[i] = 2 * dp[i - 1] + 1;
    }
    
    cout << dp[n] << '\n';
    solution(n, 1, 3);
    
    return 0;
}

