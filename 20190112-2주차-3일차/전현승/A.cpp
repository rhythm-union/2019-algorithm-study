#include <bits/stdc++.h>
using namespace std;

bool binary(int a[], int val, int left, int right) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] > val) {
            right = mid - 1;
        } else if (a[mid] < val) {
            left = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int a[100001];
    int val;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        cout << (binary(a, val, 0, n - 1) ? '1' : '0') << '\n';
    }
    
    return 0;
}

