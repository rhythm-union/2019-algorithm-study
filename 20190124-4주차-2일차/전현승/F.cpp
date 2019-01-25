#include <bits/stdc++.h>
using namespace std;

int ma[2200][2200];
int n;
int cnt[3];  // 0: -1개수, 1: 0개수, 2: 1개수

int same(int y, int x, int size) {
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (ma[y][x] != ma[i][j]) {
                return -2;
            }
        }
    }
    return ma[y][x];
}
void solution(int y, int x, int size) {
    int eval = same(y, x, size);
    if (eval != -2) {  // 모두 같음
        cnt[eval + 1]++;
    } else {  // 다른 게 하나라도 있음
        solution(y, x, size / 3);
        solution(y, x + (size / 3), size / 3);
        solution(y, x + (size / 3) * 2, size / 3);
        
        solution(y + (size / 3), x, size / 3);
        solution(y + (size / 3), x + (size / 3), size / 3);
        solution(y + (size / 3), x + (size / 3) * 2, size / 3);
        
        solution(y + (size / 3) * 2, x, size / 3);
        solution(y + (size / 3) * 2, x + (size / 3), size / 3);
        solution(y + (size / 3) * 2, x + (size / 3) * 2, size / 3);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ma[i][j];
        }
    }
    
    solution(0, 0, n);
    
    for (int i = 0; i < 3; i++) {
        cout << cnt[i] << '\n';
    }
    
    return 0;
}

