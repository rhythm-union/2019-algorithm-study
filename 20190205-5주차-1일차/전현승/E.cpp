#include <bits/stdc++.h>
using namespace std;

int n, m;
int curr_cnt;

vector<int> adj[10001];
bool visited[10001];
int cnt[10001];

void dfs(int x) {
    visited[x] = true;
    curr_cnt++;
    for (int dest : adj[x]) {
        if (!visited[dest]) {
            dfs(dest);
        }
    }
}

int main() {
    int tmp1, tmp2;
    int maxcnt;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2;
        adj[tmp2].push_back(tmp1);
    }
    
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        curr_cnt = 0;
        dfs(i);
        cnt[i] = curr_cnt;
    }
    
    maxcnt = *max_element(cnt + 1, cnt + n + 1);
    for (int i = 1; i <= n; i++) {
        if (cnt[i] == maxcnt) {
            cout << i << ' ';
        }
    }
    
    
    return 0;
}

