#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solution(ull w, ull r, ull c, ull cnt) {
    if (w == 2) {
        if (r % 2 == 0) {
            if (c % 2 == 0) {
                cout << cnt << '\n';
            } else {
                cout << cnt + 1ULL << '\n';
            }
        } else {
            if (c % 2 == 0) {
                cout << cnt + 2ULL << '\n';
            } else {
                cout << cnt + 3ULL << '\n';
            }
        }
        return;
    }
    
    if (r < w / 2ULL) {
        if (c < w / 2ULL) {
            solution(w / 2ULL, r, c, cnt);
        } else {
            solution(w / 2ULL, r, c - w / 2ULL, cnt + (w / 2ULL) * (w / 2ULL));
        }
    } else {
        if (c < w / 2ULL) {
            solution(w / 2ULL, r - w / 2ULL, c, cnt + (w / 2ULL) * (w / 2ULL) * 2ULL);
        } else {
            solution(w / 2ULL, r - w / 2ULL, c - w / 2ULL, cnt + (w / 2ULL) * (w / 2ULL) * 3ULL);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    ull n, r, c; cin >> n >> r >> c;
    solution(1ULL << n, r, c, 0ULL);
    
    return 0;
}

