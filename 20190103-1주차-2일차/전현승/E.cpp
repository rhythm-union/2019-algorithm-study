#include <bits/stdc++.h>
using namespace std;

bool comp(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        return a < b;
    }
}

int main() {
    string prev = "";
    string s[20001];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    sort(s, s + n, comp);
    
    for (int i = 0; i < n; i++) {
        if (s[i] != prev) {
            cout << s[i] << '\n';
            prev = s[i];
        }
    }
    
    return 0;
}

