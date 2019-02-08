#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[21];
int cnt;
vector<int> picked;
bool selected[21];

void solution(int to_pick) {
    if (to_pick == 0) {
        int sum = 0;
        for (auto it : picked) {
            sum += a[it];
        }
        
        if (sum == s) {
            cnt++;
        }
        return;
    }

    for (int i = (picked.empty() ? 0 : picked.back()); i < n; i++) {
        if (!selected[i]) {
            picked.push_back(i);
            selected[i] = true;
            solution(to_pick - 1);
            picked.pop_back();
            selected[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        solution(i);
    }
    
    cout << cnt << '\n';
    
    return 0;
}

