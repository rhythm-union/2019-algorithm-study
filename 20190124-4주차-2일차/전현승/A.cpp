#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> a, b, c;
    int n, m; cin >> n >> m;
    a.resize(n);
    b.resize(m);
    c.resize(n + m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int a_idx = 0, b_idx = 0, c_idx = 0;
    
    while (a_idx < n && b_idx < m) {
        if (a[a_idx] < b[b_idx]) {
            c[c_idx++] = a[a_idx++];
        } else {
            c[c_idx++] = b[b_idx++];
        }
    }
    
    while (a_idx < n) {
        c[c_idx++] = a[a_idx++];
    }
    
    while (b_idx < m) {
        c[c_idx++] = b[b_idx++];
    }
    
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << ' ';
    }
    
    return 0;
}

