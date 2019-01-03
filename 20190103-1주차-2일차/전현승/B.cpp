#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<string> st;
    string s;
    bool succeed;
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        
        succeed = true;
        while (!st.empty()) {
            st.pop();
        }
        
        for (char c : s) {
            if (c == '(') {
                st.push("아아아악");
            } else {
                if (st.empty()) {
                    succeed = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        
        if (!st.empty()) {
            succeed = false;
        }
        
        cout << (succeed ? "YES" : "NO") << '\n';
    }
    
    return 0;
}

