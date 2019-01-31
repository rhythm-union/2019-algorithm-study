#include <bits/stdc++.h>
using namespace std;

int ma[3080][8000];

void solution(int n, int y, int x) {
    if (n == 3) {
        ma[y][x] = 1;
        ma[y + 1][x - 1] = 1;
        ma[y + 1][x + 1] = 1;
        ma[y + 2][x - 2] = 1;
        ma[y + 2][x - 1] = 1;
        ma[y + 2][x] = 1;
        ma[y + 2][x + 1] = 1;
        ma[y + 2][x + 2] = 1;
        return;
    }
    
    solution(n / 2, y, x);
    solution(n / 2, y + n / 2, x - n / 2);
    solution(n / 2, y + n / 2, x + n / 2);
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n; scanf("%d", &n);
    solution(n, 0, (2 * n - 1) / 2);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            printf("%c", (ma[i][j] ? '*' : ' '));
        }
        printf("\n");
    }
    
    return 0;
}

