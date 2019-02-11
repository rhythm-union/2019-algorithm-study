#include <bits/stdc++.h>
using namespace std;

int adj[101][101];  // adj[i][j] : i에서 j로 가는 간선 가중치. 간선이 없으면 INF

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n, m; cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            adj[i][j] = 987654321;  // INF로 초기화
        }
    }
    
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);  // "시작 도시와 도착 도시를 연결하는 노선은 하나가 아닐 수 있다." ==> 간선 여러개면 어차피 최단거리 구하는 문제니 가중치 제일 작은 간선으로 대체해도 무방
    }
    
    for (int i = 1; i <= n; i++) {
        adj[i][i] = 0;  // 자기 자신은 0
    }
    
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (adj[i][j] == 987654321 ? 0 : adj[i][j]) << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}

