#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    map<int, string> ma1;
    map<string, int> ma2;
    int n, m;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        ma1.insert(make_pair(i, s));
        ma2.insert(make_pair(s, i));
    }
    
    for (int i = 0; i < m; i++) {
        cin >> s;
        if (s[0] >= 48 && s[0] <= 57) {  // 숫자
            cout << ma1.find(stoi(s))->second << '\n';
        } else {  // 알파벳
            cout << ma2.find(s)->second << '\n';
        }
    }
    
    return 0;
}

