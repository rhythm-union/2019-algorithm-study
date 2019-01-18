#include <bits/stdc++.h>
using namespace std;

int a[1000001], parent[1000001];
vector<int> dp, path;

void solution(int x) {
    if (x == -1) {
        return;
    }
    
    solution(parent[x]);
    cout << a[x] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        parent[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        int idx = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        
        if (idx == dp.size()) {
            dp.push_back(a[i]);
            path.push_back(i);
        } else {
            dp[idx] = a[i];
            path[idx] = i;
        }
        
        if (idx - 1 >= 0) {  // idx (lower_bound) 0일 때는 굳이 parent 안 넣어줘도 -1이다
            parent[i] = path[idx - 1];
        }
    }
    
    cout << dp.size() << '\n';
    solution(path[path.size() - 1]);
    
    return 0;
}

