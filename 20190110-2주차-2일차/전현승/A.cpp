#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    int cost[10];
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        while (k >= cost[i]) {
            k -= cost[i];
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    
    return 0;
}

