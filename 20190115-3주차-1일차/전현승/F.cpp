#include <bits/stdc++.h>
using namespace std;

void solution(int n, int b) {
    if (n == 0) {
        return;
    } else {
        solution(n / b, b);
        cout << n % b << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int base_10 = 0;
    int temp;
    int a, b; cin >> a >> b;
    int m; cin >> m;
    while (m--) {
        cin >> temp;
        base_10 = base_10 * a + temp;
    }
    
    solution(base_10, b);
    
    return 0;
}

