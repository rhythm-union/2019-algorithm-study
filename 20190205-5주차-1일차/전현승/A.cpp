#include <bits/stdc++.h>
using namespace std;

int n, m, v;
int tmp1, tmp2;
int dest;
vector<int> adj[1001];

bool visited_dfs[1001];
bool visited_bfs[1001];
queue<int> q;

void dfs(int x) {
    visited_dfs[x] = true;
    cout << x << ' ';
    for (int i = 0; i < adj[x].size(); i++) {
        dest = adj[x][i];
        if (!visited_dfs[dest]) dfs(dest);
    }
}

void bfs(int x) {
    int curr = x;
    
    visited_bfs[curr] = true; q.push(curr);
    while (!q.empty()) {
        curr = q.front(); q.pop();
        cout << curr << ' ';
        for (int i = 0; i < adj[curr].size(); i++) {
            dest = adj[curr][i];
            if (!visited_bfs[dest]) {
                visited_bfs[dest] = true;
                q.push(dest);
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        cin >> tmp1 >> tmp2;
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    
    for (int i = 0; i < n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    
    // dfs
    dfs(v);
    cout << '\n';
    
    // bfs
    bfs(v);
    
    return 0;
}

