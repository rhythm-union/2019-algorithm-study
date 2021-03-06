#include <cstdio>
#pragma warning(disable:4996)
int dp[301][21];
int fr[301][21];
int arr[301][21];
void func(int a, int b);
int main() {
	int w, n;
	scanf("%d %d", &w, &n);
	for (int i = 1; i <= w; i++) {
		scanf("%*d");
		for (int j = 1; j <= n; j++) scanf("%d", arr[i] + j);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = w; j; j--) {
			for (int k = 0; k <= j; k++) if (dp[j][i] < dp[j - k][i - 1] + arr[k][i]) {
				dp[j][i] = dp[j - k][i - 1] + arr[k][i];
				fr[j][i] = j - k;
			}
		}
	}
	printf("%d\n", dp[w][n]);
	func(w, n);
	return 0;
}

void func(int a, int b) {
	if (!b) return;
	func(fr[a][b], b - 1);
	printf("%d ", a - fr[a][b]);
}