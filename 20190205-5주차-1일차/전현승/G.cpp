#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[101];
queue<int> q;
bool visited[101];
int step[101];

int bfs(int x) {
    int bacon = 0;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (int dest : adj[curr]) {
            if (!visited[dest]) {
                q.push(dest);
                visited[dest] = true;
                step[dest] = step[curr] + 1;
                bacon += step[dest];
            }
        }
    }
    
    return bacon;
}

int main() {
    int a, b;
    int bacon, min_bacon = INT_MAX;
    int min_idx;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        bool duplicated = false;
        for (auto it : adj[a]) {
            if (it == b) {
                duplicated = true;
                break;
            }
        }
        if (!duplicated) {
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }
    
    for (int i = 1; i <= n; i++) {
        memset(visited, false, 101);
        memset(step, 0, 101);
        
        q.push(i);
        visited[i] = true;
        
        bacon = bfs(i);
        if (min_bacon > bacon) {
            min_bacon = bacon;
            min_idx = i;
        }
    }
    
    cout << min_idx << '\n';
    
    return 0;
}

