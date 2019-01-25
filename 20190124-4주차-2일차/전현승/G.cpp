#include <bits/stdc++.h>
using namespace std;

int ma[65][65];

bool same(int y, int x, int length) {
    bool diff = false;
    for (int i = y; i < y + length; i++) {
        for (int j = x; j < x + length; j++) {
            if (ma[i][j] != ma[y][x]) {
                diff = true;
                break;
            }
        }
        if (diff) {
            break;
        }
    }
    
    return (diff ? false : true);
}

void solution(int y, int x, int length) {
    if (same(y, x, length)) {
        printf("%d", ma[y][x]);
    } else {
        printf("(");
        for (int i = y; i < y + length; i += length / 2) {
            for (int j = x; j < x + length; j += length / 2) {
                solution(i, j, length / 2);
            }
        }
        printf(")");
    }
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%1d", &ma[i][j]);
        }
    }
    
    solution(0, 0, n);
    printf("\n");
    
    return 0;
}

