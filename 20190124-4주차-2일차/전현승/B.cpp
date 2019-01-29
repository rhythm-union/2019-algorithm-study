#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solution(ll b, ll n, ll m) {  // (b^n)%m
    if (n == 0LL) {
        return 1;
    }
    
    ll ret = solution(b, n / 2, m) % m;
    if (n % 2 == 0) {
        return (ret * ret) % m;
    } else {
        return (((ret * ret) % m) * b) % m;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    ll a, b, c; cin >> a >> b >> c;
    cout << solution(a, b, c) << '\n';
    
    return 0;
}

