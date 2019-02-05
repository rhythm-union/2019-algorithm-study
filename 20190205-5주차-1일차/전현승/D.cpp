#include <bits/stdc++.h>
using namespace std;

int n;
bool adj[101][101];
bool visited[101];
bool firstcall;

void dfs(int x) {
    visited[x] = true;
    if (firstcall) {
        visited[x] = false;
        firstcall = false;
    }
    
    for (int dest = 0; dest < n; dest++) {
        if (adj[x][dest] && !visited[dest]) {
            dfs(dest);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        memset(visited, false, sizeof(visited));
        firstcall = true;
        dfs(i);
        for (int j = 0; j < n; j++) {
            cout << visited[j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}

