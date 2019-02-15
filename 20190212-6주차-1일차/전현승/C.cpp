#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

vector<pii> adj[100001];
int v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    cin >> v;
    for (int i = 0; i < v; i++) {
        int a; cin >> a;
        while (true) {
            int b; cin >> b;
            if (b == -1) break;
            int w; cin >> w;
            adj[a].push_back(make_pair(b, w));
        }
    }
    
    // 걍 bfs
    // 임의 정점에서 가장 멀리 갔다가 거기서 다시 멀리 감
    
    int max_v = 0, max_dist = 0;
    bool visited[100001] = {false, };
    queue<pii> q;
    
    visited[1] = true;
    q.push(make_pair(1, 0));
    while (!q.empty()) {
        int curr = q.front().first;
        int dist = q.front().second;
        q.pop();
        
        if (dist > max_dist) {
            max_dist = dist;
            max_v = curr;
        }
        
        for (auto it : adj[curr]) {
            int dest = it.first;
            int dest_dist = it.second;
            
            if (!visited[dest]) {
                visited[dest] = true;
                q.push(make_pair(dest, dist + dest_dist));
            }
        }
    }
    
    max_dist = 0;
    memset(visited, 0, sizeof(visited));
    visited[max_v] = true;
    q.push(make_pair(max_v, 0));
    while (!q.empty()) {
        int curr = q.front().first;
        int dist = q.front().second;
        q.pop();
        
        max_dist = max(max_dist, dist);
        
        for (auto it : adj[curr]) {
            int dest = it.first;
            int dest_dist = it.second;
            
            if (!visited[dest]) {
                visited[dest] = true;
                q.push(make_pair(dest, dist + dest_dist));
            }
        }
    }
    
    cout << max_dist << '\n';
    
    return 0;
}

