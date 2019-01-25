#include <bits/stdc++.h>
using namespace std;

char ma[2500][2500];

void solution(int y, int x, int n) {
    if (n == 1) {
        ma[y][x] = '*';
        return;
    }
    
    int m = n / 3;
    solution(y, x, m);
    solution(y, x + m, m);
    solution(y, x + 2 * m, m);
    solution(y + m, x, m);
    for (int i = y + m; i < y + 2 * m; i++) {
        for (int j = x + m; j < x + 2 * m; j++) {
            ma[i][j] = ' ';
        }
    }
    solution(y + m, x + 2 * m, m);
    solution(y + 2 * m, x, m);
    solution(y + 2 * m, x + m, m);
    solution(y + 2 * m, x + 2 * m, m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n; cin >> n;
    solution(0, 0, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ma[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}

