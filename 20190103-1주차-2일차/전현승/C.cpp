#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int temp;
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }
    
    cout << '<';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        cout << q.front();
        if (i == n - 1) {
            cout << ">\n";
        } else {
            cout << ", ";
        }
        
        q.pop();
    }
    
    return 0;
}

