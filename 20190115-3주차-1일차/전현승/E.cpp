#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solution(ull n) {
    if (n == 0) return;
    else {
        solution(n / 2);
        cout << n % 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ull n; cin >> n;
    solution(n);
    
    return 0;
}

