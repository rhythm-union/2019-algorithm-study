#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        pq.push(tmp);
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp; cin >> tmp;
            pq.push(tmp);
            pq.pop();
        }
    }
    
    cout << pq.top() << '\n';
    
    return 0;
}

