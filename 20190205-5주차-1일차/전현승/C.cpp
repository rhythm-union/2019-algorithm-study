#include <bits/stdc++.h>
using namespace std;

struct direction {
    int y;
    int x;
} d[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

int n, m;
int ma[101][101];
bool visited[101][101];
int step[101][101];

void bfs(int y, int x) {
    queue<pair<int, int> > q;
    q.push(make_pair(y, x));
    visited[y][x] = true;
    step[y][x] = 1;
    
    while (!q.empty()){
        pair<int, int> curr = q.front(); q.pop();
        for (auto it : d) {
            int dest_y = curr.first + it.y;
            int dest_x = curr.second + it.x;
            
            if (dest_y >= 0 && dest_y < n && dest_x >= 0 && dest_x < m && ma[dest_y][dest_x] == 1 && !visited[dest_y][dest_x]) {
                q.push(make_pair(dest_y, dest_x));
                visited[dest_y][dest_x] = true;
                step[dest_y][dest_x] = step[curr.first][curr.second] + 1;
            }
            
            if (dest_y == n - 1 && dest_x == m - 1) {
                return;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &ma[i][j]);
        }
    }
    
    bfs(0, 0);
    
    printf("%d\n", step[n - 1][m - 1]);
    
    return 0;
}

