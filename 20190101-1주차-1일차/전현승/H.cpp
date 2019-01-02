#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp;
    string res_rev;
    string s; cin >> s;
    
    for (int i = s.length() - 1; i >= 0; i -= 3) {
        temp = 0;
        if (i - 2 >= 0) {
            temp += (s[i - 2] - 48) * 4;
        }
        if (i - 1 >= 0) {
            temp += (s[i - 1] - 48) * 2;
        }
        temp += s[i] - 48;
        res_rev += temp + 48;
    }
    
    reverse(res_rev.begin(), res_rev.end());
    cout << res_rev << '\n';
    
    return 0;
}

