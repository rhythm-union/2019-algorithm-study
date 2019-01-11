#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int a;
    int b;
} applicant;

bool comp(const applicant& a, const applicant& b) {
    return a.a < b.a;
}

int main() {
    int t; cin >> t;
    while (t--) {
        applicant ap[100001];
        int latest, cnt = 0;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ap[i].a >> ap[i].b;
        }
        
        sort(ap, ap + n, comp);  // 서류 순위순으로 정렬해 두면, 앞에 있는 사람이 무조건 하나는 이기는 게 보장된다.
        
        for (int i = 0; i < n; i++) {  // 면접 순위만 보면 된다
            if (i == 0) {
                latest = ap[i].b;  // 첫 사람은 서류 1등이라 누구한테든 하나는 이긴다
                cnt++;
            } else {
                if (latest > ap[i].b) {  // 면접 비교해서 더 잘 쳤다 (숫자가 작다)면 뽑는다 (latest 갱신해가면서)
                    latest = ap[i].b;
                    cnt++;
                }
            }
        }
        
        cout << cnt << '\n';
    }
    
    return 0;
}

