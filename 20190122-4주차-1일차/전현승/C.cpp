#include <bits/stdc++.h>
using namespace std;

int r, c;
int m[21][21];
// bool visited[21][21]; 어차피 alphabet duplicated에서 걸러지니까 맵 visited 체크할 필요 없겠네
bool alphabet_dup[27];
int maxlen;

struct direction {
    int x;
    int y;
} d[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

void solution(int y, int x, int len) {
    alphabet_dup[m[y][x] - 65] = true;
    
    bool blocked = true;
    for (auto it : d) {
        int dest_y = y + it.y;
        int dest_x = x + it.x;
        if (dest_y >= 0 && dest_y < r && dest_x >= 0 && dest_x < c && !alphabet_dup[m[dest_y][dest_x] - 65]) {
            blocked = false;
            solution(dest_y, dest_x, len + 1);
        }
    }
    
    // 백트래킹 : 방문 해제 (시점 주의. 언제 해야 하는지)
    alphabet_dup[m[y][x] - 65] = false;
    
    if (blocked) {
        maxlen = max(maxlen, len);
        return;
    }
}

int main() {
    string s;
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        cin >> s;
        for (int j = 0; j < c; j++) {
            m[i][j] = s[j];
        }
    }
    
    solution(0, 0, 1);
    
    cout << maxlen << '\n';
    
    return 0;
}

