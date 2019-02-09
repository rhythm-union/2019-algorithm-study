#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    vector<pii> adj[1001];
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w; cin >> x >> y >> w;
        adj[x].push_back(make_pair(y, w));
    }
    int start, obj; cin >> start >> obj;
    
    vector<int> dist(n + 1, INT_MAX);
    dist[start] = 0;
    priority_queue<pii> pq;
    pq.push(make_pair(0, start));
    while (!pq.empty()) {
        int cost = -pq.top().first;
        int curr = pq.top().second;
        pq.pop();
        
        if (dist[curr] < cost) continue;
        
        for (auto it : adj[curr]) {
            int dest = it.first;
            int next_dist = cost + it.second;
            if (dist[dest] > next_dist) {
                dist[dest] = next_dist;
                pq.push(make_pair(-next_dist, dest));
            }
        }
    }
    
    cout << dist[obj] << '\n';
    
    return 0;
}

