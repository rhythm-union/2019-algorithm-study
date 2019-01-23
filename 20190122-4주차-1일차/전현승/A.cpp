#include <bits/stdc++.h>
using namespace std;

int n;
int row[15];
int cnt;

bool promising(int y) {
    for (int i = 0; i < y; i++) {
        if (row[y] == row[i] || y - i == abs(row[y] - row[i])) {
            return false;
        }
    }
    
    return true;
}

void solution(int y) {
    if (y == n) {  // 체스판 맨 밑 row까지 왔으면 하나의 방법을 찾은 것
        cnt++;
        return;
    }
    
    for (int i = 0; i < n; i++) {
        row[y] = i;  // row[y] : y번째 row에 있는 queen의 col 번호
        if (promising(y)) {
            solution(y + 1);
        }
    }
}

int main() {
    cin >> n;
    
    solution(0);  // 0번째 row부터 시작
    
    cout << cnt << '\n';
    
    return 0;
}

