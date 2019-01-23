#include <bits/stdc++.h>
using namespace std;

vector<int> num, picked;

void solution(int k, int to_pick) {
    if (to_pick == 0) {
        for (int it : picked) {
            cout << it << ' ';
        }
        cout << '\n';
        return;
    }
    
    for (int i = 0; i < k; i++) {
        if (picked.empty() || picked.back() < num[i]) {
            picked.push_back(num[i]);
            solution(k, to_pick - 1);
            picked.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (true) {
        int k; cin >> k;
        if (k == 0) break;
        
        num.clear(); num.resize(k);
        picked.clear();
        for (int i = 0; i < k; i++) {
            cin >> num[i];
        }
        
        solution(k, 6);
        cout << '\n';
    }
    
    return 0;
}

