#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    string s;
    int arg;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push") {
            cin >> arg;
            st.push(arg);
        } else if (s == "top") {
            if (st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
            }
        } else if (s == "size") {
            cout << st.size() << '\n';
        } else if (s == "empty") {
            if (st.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (s == "pop") {
            if (st.empty()) {
                cout << -1 << '\n';
            } else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
    }
    
    return 0;
}

