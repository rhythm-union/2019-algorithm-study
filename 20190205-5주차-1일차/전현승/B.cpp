#include <bits/stdc++.h>
using namespace std;

int n, m;
int cnt;
vector<int> adj[101];
bool visited[101];

void dfs(int x) {
    visited[x] = true;
    cnt++;
    for (int dest : adj[x]) {
        if (!visited[dest]) dfs(dest);
    }
}

int main() {
    int tmp1, tmp2;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2;
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    
    dfs(1);
    
    cout << cnt - 1 << '\n';
    
    return 0;
}

