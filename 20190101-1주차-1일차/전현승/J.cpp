#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[9];
    int diff, maxdiff = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    do {
        diff = 0;
        for (int i = 0; i < n - 1; i++) {
            diff += abs(a[i] - a[i + 1]);
        }
        maxdiff = max(maxdiff, diff);
    } while (next_permutation(a, a + n));
    
    cout << maxdiff << '\n';
    
    return 0;
}

