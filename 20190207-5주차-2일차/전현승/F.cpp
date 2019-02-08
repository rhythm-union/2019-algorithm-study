#include <bits/stdc++.h>
using namespace std;

int indegree[32001];
vector<int> adj[32001];
vector<int> order;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        indegree[b]++;
        adj[a].push_back(b);
    }
    
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            pq.push(-i);
        }
    }
    
    while (!pq.empty()) {
        int curr = -pq.top(); pq.pop();
        order.push_back(curr);
        for (int next : adj[curr]) {
            indegree[next]--;
            if (indegree[next] == 0) {
                pq.push(-next);
            }
        }
    }
    
    for (int it : order) {
        cout << it << ' ';
    }
    
    return 0;
}

