#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    vector<pii> adj[20001];  // pii(연결된 정점 번호, 간선 가중치)
    int v, e; cin >> v >> e;
    int k; cin >> k;  // 시작정점 k
    for (int i = 0; i < e; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
    }
    
    vector<int> dist(v + 1, INT_MAX);  // 시작점에서 각 정점까지의 최단거리
    dist[k] = 0;  // 시작점 dist는 0으로 초기화하고 시작
    priority_queue<pii> pq;  // pii(가중치, 정점)
    pq.push(make_pair(0, k));  // bfs처럼 시작점 넣고 시작
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
    
    for (int i = 1; i <= v; i++) {
        if (dist[i] == INT_MAX) {
            cout << "INF\n";
        } else {
            cout << dist[i] << '\n';
        }
    }
    
    return 0;
}

