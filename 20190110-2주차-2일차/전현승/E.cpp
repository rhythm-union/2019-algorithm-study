#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b) {
    return a > b;
}

int main() {
    int sum = 0;
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - 48;  // 자릿수 합
    }
    if ((find(s.begin(), s.end(), '0') == s.end()) || sum % 3 != 0) {  // 30의 배수가 되는지 체크
        cout << -1 << '\n';  // (10의 배수와 3의 배수 조건을 동시에 만족시켜야 한다. 10의 배수 == 0이 있는가, 3의 배수 == 자릿수 합이 3의 배수인가)
    }    
    else {
        sort(s.begin(), s.end(), cmp);  // 0이 맨 뒤로 가기만 하면 자릿수 합이 3이므로 30의 배수임이 보장되므로, 자릿수 큰 거부터 출력하면 된다. 이게 그리디 요소인듯
        cout << s << '\n';
    }
    return 0;
}

