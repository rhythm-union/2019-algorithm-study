#include <bits/stdc++.h>
using namespace std;

vector<char> v, picked;
bool visited[16];

void solution(int c, int ja_cnt, int mo_cnt, int to_pick) {
    if (to_pick == 0 && ja_cnt >= 2 && mo_cnt >= 1) {
        for (char it : picked) {
            cout << it;
        }
        cout << '\n';
        return;
    }
    
    for (int i = 0; i < c; i++) {
        if (!visited[i] && (picked.empty() || picked.back() < v[i])) {
            picked.push_back(v[i]);
            visited[i] = true;
            if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'u' || v[i] == 'o') {
                solution(c, ja_cnt, mo_cnt + 1, to_pick - 1);
            } else {
                solution(c, ja_cnt + 1, mo_cnt, to_pick - 1);
            }
            picked.pop_back();
            visited[i] = false;
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l, c; cin >> l >> c;
    v.resize(c);
    for (int i = 0; i < c; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    solution(c, 0, 0, l);
    
    return 0;
}

