#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tmp;
    int cnt[10001] = {0, };
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cnt[tmp]++;
    }
    
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << '\n';
        }
    }
    return 0;
}

