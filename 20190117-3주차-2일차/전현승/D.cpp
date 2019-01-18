#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    int a[1000001];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (v.empty() || v.back() < a[i]) {
            v.push_back(a[i]);
        } else {
            int idx = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            v[idx] = a[i];
        }
    }
    
    cout << v.size() << '\n';
    
    return 0;
}

