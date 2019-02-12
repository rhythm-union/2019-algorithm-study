#include <bits/stdc++.h>
using namespace std;

int tree[10001][2];  // 0: 왼쪽, 1: 오른쪽
vector<int> adj[10001];
int col_idx;
vector<int> depth_col[10001];  // depth_col[a] : a번 레벨 노드들의 열 번호들 반환
int max_level;

void inorder(int x, int level) {
    if (x == -1) {
        return;
    }
    
    max_level = max(max_level, level);
    
    inorder(tree[x][0], level + 1);
    col_idx++;
    depth_col[level].push_back(col_idx);
    inorder(tree[x][1], level + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifdef DEBUG
    freopen("in.txt", "r", stdin);
    #endif
    
    int cnt[10001] = {0, };  // 루트 판별용 수 등장 횟수. 한번밖에 등장 안한게 루트이다
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int rt, l, r; cin >> rt >> l >> r;
        tree[rt][0] = l;
        tree[rt][1] = r;
        cnt[rt]++;
        if (l != -1) {
            adj[rt].push_back(l);
            adj[l].push_back(rt);
            cnt[l]++;
        }
        if (r != -1) {
            adj[rt].push_back(r);
            adj[r].push_back(rt);
            cnt[r]++;
        }
    }
    
    // 루트 판별
    int root;
    for (int i = 1; i <= n; i++) {
        if (cnt[i] == 1) {
            root = i;
            break;
        }
    }
    
    // inorder
    inorder(root, 1);
    
    // depth_col
    int max_diff = 0, max_diff_lv = 0;
    for (int i = 1; i <= max_level; i++) {
        int diff = *(depth_col[i].end() - 1) - *depth_col[i].begin() + 1;
        if (diff > max_diff) {
            max_diff = diff;
            max_diff_lv = i;
        }
    }
    
    cout << max_diff_lv << ' ' << max_diff << '\n';
    
    return 0;
}

