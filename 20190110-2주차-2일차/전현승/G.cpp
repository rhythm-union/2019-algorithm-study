#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, i, p_min = 1001, i_min = 1001;
    int total = 0;
    int n, m; cin >> n >> m;
    while (m--) {
        cin >> p >> i;
        p_min = min(p_min, p);  // 종류 크로스해서 사도 되니까 패키지, 낱개 가격 중 최솟값만 기록. 이게 그리디 요소?
        i_min = min(i_min, i);
    }
    
    if (p_min < i_min * 6) {  // 패키지가 더 쌈
        total += p_min * (n / 6);  // 6k개까지 패키지로 사자
        if (n % 6 != 0) {  // 6k개 샀는데 남았다
            if (p_min < i_min * (n % 6)) {  // 패키지 1개가격이랑 남은거 낱개로 사는가격 비교
                total += p_min;
            } else {
                total += i_min * (n % 6);
            }
        }
    } else {  // 낱개 6개가 더 싸면 다 낱개로 사도록 하자
        total += i_min * n;
    }
    
    cout << total << '\n';
    
    return 0;
}

