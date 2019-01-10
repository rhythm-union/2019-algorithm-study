#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int start;
    int end;
} conference;

bool comp(const conference& a, const conference& b) {
    if (a.end != b.end) return a.end < b.end;
    else return a.start < b.start;
}

int main() {
    conference c[100001];
    int idx = 0, cnt = 1;
    bool found;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i].start >> c[i].end;
    }
    
    sort(c, c + n, comp);
    
    while (true) {
        found = false;
        for (int i = idx + 1; i < n; i++) {
            if (c[i].start >= c[idx].end) {
                idx = i;
                cnt++;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << cnt << '\n';
            break;
        }
    }
    
    return 0;
}

