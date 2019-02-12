#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
queue<int> q;
bool visited[100001];
int parent[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int n1, n2; cin >> n1 >> n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    
    visited[1] = true;
    q.push(1);
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (int dest : adj[curr]) {
            if (!visited[dest]) {
                visited[dest] = true;
                q.push(dest);
                parent[dest] = curr;
            }
        }
    }
    
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << '\n';
    }
    
    return 0;
}

