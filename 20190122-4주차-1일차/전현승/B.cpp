#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    queue<pair<int, int> > q;  // <n 위치, depth>
    pair<int, int> front;
    int curr, depth;
    bool visited[100001] = {false, };
    
    cin >> n >> k;
    if (n == k) {
        cout << 0 << '\n';
        return 0;
    }
    
    q.push(make_pair(n, 0));  // 트리의 루트
    
    while (true) {
        if (q.empty()) {
            break;
        }
        
        front = q.front(); q.pop();
        curr = front.first;
        depth = front.second;
        
        if (curr == k) {
            break;
        }
        
        if (curr - 1 >= 0 && !visited[curr - 1]) {
            visited[curr - 1] = true;
            q.push(make_pair(curr - 1, depth + 1));
        }
        if (curr + 1 <= 100000 && !visited[curr + 1]) {
            visited[curr + 1] = true;
            q.push(make_pair(curr + 1, depth + 1));
        }
        if (curr * 2 <= 100000 && !visited[curr * 2]) {
            visited[curr * 2] = true;
            q.push(make_pair(curr * 2, depth + 1));
        }
    }
    
    cout << depth << '\n';
    
    return 0;
}

