#include <bits/stdc++.h>
using namespace std;

int n, m;
bool adj[1001][1001];
bool visited[1001];
vector<int> order;  // 위상정렬 결과

void dfs(int x) {  // 단순 방문체크만 해주는 dfs
    visited[x] = true;
    for (int next = 1; next <= n; next++) {
        if (adj[x][next] && !visited[next]) {
            dfs(next);
        }
    }
    order.push_back(x);  // 중요 : dfs가 끝날 때마다 현재 정점 번호 기록
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int cnt; cin >> cnt;
        int buf; cin >> buf;  // 입력받는 부분 조심
        for (int j = 0; j < cnt - 1; j++) {
            int y; cin >> y;
            adj[buf][y] = true;
            buf = y;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    
    reverse(order.begin(), order.end());
    
    for (int i = 1; i <= n; i++) {  // dfs로 위상정렬하면 조기종료되었는지 여부를 알 수 없다. (엉터리값이 들어가 있음)
        for (int j = i + 1; j <= n; j++) {  // 그래서 이렇게 역순으로 가는 간선이 있는지 체크해줘야 한다.
            if (adj[order[j]][order[i]]) {  // 1->2, 2->3, 3->1 사이클의 경우 정렬 결과가 {1, 2, 3}이 나오는데,
                cout << 0 << '\n';  // 정렬 결과의 반대인 3->1 간선이 있으므로 이 정렬 결과는 엉터리다.
                return 0;
            }
        }
    }
    
    for (int it : order) {
        cout << it << '\n';
    }
    
    return 0;
}

