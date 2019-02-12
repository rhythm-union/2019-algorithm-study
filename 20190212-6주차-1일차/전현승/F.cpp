#include <bits/stdc++.h>
using namespace std;

int n;
int in[100001], post[100001];

void solution(int in_b, int in_e, int post_b, int post_e) {
    if (in_b > in_e || post_b > post_e) return;
    
    int root = post[post_e];
    int root_idx;
    for (int i = in_b; i <= in_e; i++) {
        if (in[i] == root) {
            root_idx = i;
            break;
        }
    }
    
    cout << root << ' ';
    solution(in_b, root_idx - 1, post_b, post_b + (root_idx - 1 - in_b));
    solution(root_idx + 1, in_e, post_b + (root_idx - in_b), post_e - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> post[i];
    }
    
    solution(0, n - 1, 0, n - 1);
    cout << '\n';
    
    return 0;
}

