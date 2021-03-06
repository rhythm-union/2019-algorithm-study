#include<cstdio>
#pragma warning(disable:4996)
int a[100000];
int main() {
	int n, m, mid;
	int up = 1e9, low = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
		if (a[i] > low) low = a[i];
	}
	while (low <= up) {
		mid = (low + up) / 2;
		int s = 0, c = 1;
		for (int i = 0; i < n; i++) {
			if (s + a[i] > mid)
			{
				s = 0;
				c++;
			}
			s += a[i];
		}
		if (c > m)
		{
			low = mid + 1;
		}
		else
		{
			up = mid - 1;
		}
	}
	printf("%d", low);
	return 0;
}