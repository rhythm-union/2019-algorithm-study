#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    int m = a * d + b * c, n = b * d;
    
    cout << m / gcd(m, n) << ' ' << n / gcd(m, n) << '\n';

    return 0;
}

