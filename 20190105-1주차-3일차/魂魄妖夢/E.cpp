#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> tri;
    bool succeed;
    int last;
    int a[1001];
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    
    tri.push_back(1);
    last = *(tri.end() - 1);
    while (last <= 1000) {
        tri.push_back(last + tri.size() + 1);
        last = *(tri.end() - 1);
    }
    
    for (int l = 0; l < t; l++) {
        succeed = false;
        for (int i = 0; i < tri.size(); i++) {
            for (int j = 0; j < tri.size(); j++) {
                for (int k = 0; k < tri.size(); k++) {
                    if (a[l] == tri[i] + tri[j] + tri[k]) {
                        succeed = true;
                        break;
                    }
                }
            }
        }
        cout << (succeed ? 1 : 0) << '\n';
    }
    
    
    return 0;
}

