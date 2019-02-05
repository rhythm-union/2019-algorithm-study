#include <bits/stdc++.h>
using namespace std;

int m, n, k;
int arr[101][101];
bool visited[101][101];
int area;
int dest_x, dest_y;
struct direction {
	int x;
	int y;
} d[4] = { {0, 1}, {0, -1}, {-1, 0}, {1, 0} };

void dfs(int x, int y) {
	visited[y][x] = true; area++;

	for (auto it : d) {
		dest_x = x + it.x, dest_y = y + it.y;
		if (arr[dest_y][dest_x] == 0 && !visited[dest_y][dest_x] && (dest_x >= 0) && (dest_x < n) && (dest_y >= 0) && (dest_y < m)) {
			dfs(dest_x, dest_y);
		}
	}
}


int main() {
	int area_cnt = 0;
	vector<int> area_v;
	int ld_x, ld_y, ru_x, ru_y;
	cin >> m >> n >> k;  // 가로 n개 세로 m개
	for (int i = 0; i < k; i++) {
		cin >> ld_x >> ld_y >> ru_x >> ru_y;
		// fill square with 1 (square: 1, blank: 0)
		for (int j = ld_x; j < ru_x; j++) {
			for (int k = ld_y; k < ru_y; k++) {
				arr[k][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0 && !visited[i][j]) {
				area_cnt++;
				dfs(j, i);
				area_v.push_back(area);
				area = 0;
			}
		}
	}

	sort(area_v.begin(), area_v.end());
	cout << area_cnt << '\n';
	for (auto it : area_v) cout << it << ' ';

	return 0;
}
