#include <bits/stdc++.h>
using namespace std;

int cnt;
int a[1001];
bool visited[1001];

void floodfill(int x) {
    visited[x] = true;
    if (!visited[a[x]]) {
        floodfill(a[x]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        memset(visited, 0, sizeof(visited));
        cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                cnt++;
                floodfill(i);
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}

