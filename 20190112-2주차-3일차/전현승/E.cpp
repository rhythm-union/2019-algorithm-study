#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n; cin >> n;
    cout << ((unsigned long long)sqrt(n) == (double)sqrt(n) ? (unsigned long long)sqrt(n) : (unsigned long long)sqrt(n) + 1) << '\n';
    
    return 0;
}

