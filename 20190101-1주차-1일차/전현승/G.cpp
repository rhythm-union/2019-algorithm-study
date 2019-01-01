#include <bits/stdc++.h>
using namespace std;

bool comp(const int& a, const int& b) {
    return a > b;
}

int main() {
    int a[1000001];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n, comp);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
    
    return 0;
}

