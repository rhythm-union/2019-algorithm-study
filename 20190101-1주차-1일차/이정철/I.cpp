#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
int main() {
	int n, a[9];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)//1~N 까지 넣기
	{
		a[i] = i + 1;
	}
	do
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	} while (std::next_permutation(a, a + n));
	return 0;
}