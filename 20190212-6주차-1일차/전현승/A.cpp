#include <bits/stdc++.h>
using namespace std;

int tree[27][2];  // [][0]: 왼쪽, [][1]: 오른쪽

void preorder(int x) {
    if (x == -1) {
        return;
    }
    cout << (char)(x + 65);
    preorder(tree[x][0]);
    preorder(tree[x][1]);
}

void inorder(int x) {
    if (x == -1) {
        return;
    }
    inorder(tree[x][0]);
    cout << (char)(x + 65);
    inorder(tree[x][1]);
}

void postorder(int x) {
    if (x == -1) {
        return;
    }
    postorder(tree[x][0]);
    postorder(tree[x][1]);
    cout << (char)(x + 65);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while (n--) {
        char root; cin >> root;
        char l, r; cin >> l >> r;
        if (l == '.') {
            tree[root - 65][0] = -1;
        } else {
            tree[root - 65][0] = l - 65;
        }
        if (r == '.') {
            tree[root - 65][1] = -1;
        } else {
            tree[root - 65][1] = r - 65;
        }
    }
    
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';
    
    return 0;
}

