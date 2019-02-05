#include <bits/stdc++.h>
using namespace std;

int m[26][26];  // 입력받은 맵 저장
bool visited[26][26];  // 방문 체크 (false로 초기화, dfs 함수 call시 바로 true로 체크)
int dest_x, dest_y, cnt, n;

struct direction {
	int x;
	int y;
} d[4] = { { 0, 1 },{ 0, -1 },{ -1, 0 },{ 1, 0 } };  // 상, 하, 좌, 우

void dfs(int x, int y) {
	visited[x][y] = true; cnt++;  // 방문 체크, 단지내 집 수 1 증가
	for (auto it : d) {
		dest_x = x + it.x, dest_y = y + it.y;  // 탐색할 x, y 좌표
		if (m[dest_x][dest_y] == 1 && !visited[dest_x][dest_y] && (dest_x >= 0) && (dest_x < n) && (dest_y >= 0) && (dest_y < n)) {
			dfs(dest_x, dest_y);
		}
	}
}

int main() {
	string s;
	vector<int> v;
	int total_cnt = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			m[i][j] = s[j] - 48;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (m[i][j] == 1 && !visited[i][j]) {
				total_cnt++;
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(v.begin(), v.end());
	cout << total_cnt << '\n';
	for (auto it : v) {
		cout << it << '\n';
	}

	return 0;
}
