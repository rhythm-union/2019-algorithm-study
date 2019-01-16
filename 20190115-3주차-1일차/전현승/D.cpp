#include <bits/stdc++.h>
using namespace std;

int main() {
    bool erased[1001] = {false, };
    int n, k, step = 0;
    cin >> n >> k;
    
    for (int i = 2; i <= n; i++) {
        if (!erased[i]) {
            erased[i] = true;
            if (++step == k) {
                cout << i << '\n';
                return 0;
            } else {
                for (int j = i * i; j <= n; j += i) {
                    if (!erased[j]) {
                        erased[j] = true;
                        if (++step == k) {
                            cout << j << '\n';
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}

