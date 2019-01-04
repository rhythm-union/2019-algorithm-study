#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    int n;
    string x;
    string buf;
    
    bool reversed;
    bool error;
    deque<int> dq;
    
    int size;
    
    int t; cin >> t;
    while (t--) {
        reversed = false;
        error = false;
        dq.clear();
        
        cin >> p >> n >> x;
        for (char c : x) {
            if (!buf.empty() && (c == ',' || c == ']')) {
                dq.push_back(stoi(buf));
                buf.clear();
            }
            if (c >= 48 && c <= 57) {
                buf += c;
            }
        }
        
        for (char c : p) {
            if (c == 'R') {
                reversed = (reversed ? false : true);
            } else {
                if (dq.empty()) {
                    error = true;
                    break;
                } else {
                    reversed ? dq.pop_back() : dq.pop_front();
                }
            }
        }
        
        if (error) {
            cout << "error\n";
        } else {
            size = dq.size();
            cout << '[';
            if (reversed) {
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    if (dq.size() > 0) {
                        cout << ',';
                    }
                }
            } else {
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    if (dq.size() > 0) {
                        cout << ',';
                    }
                }
            }
            cout << "]\n";
        }
        
    }
    
    return 0;
}

