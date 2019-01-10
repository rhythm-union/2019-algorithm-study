#include <bits/stdc++.h>
using namespace std;

int main() {
    int time[1001];
    int total = 0, sub = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }
    
    sort(time, time + n);
    
    for (int i = 0; i < n; i++) {
        sub += time[i];
        total += sub;
    }
    
    cout << total << '\n';
    
    return 0;
}

