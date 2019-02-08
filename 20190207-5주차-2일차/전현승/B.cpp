#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    bitset<33554433> bt(0);
    int n;
    while (~scanf("%d", &n)) {
        if (bt[n] == 0) {
            bt[n] = 1;
            printf("%d\n", n);
        }
    }
    
    return 0;
}

