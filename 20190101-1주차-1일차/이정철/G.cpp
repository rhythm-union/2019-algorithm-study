#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
int arr[1000000];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	std::sort(arr, arr + n);
	std::reverse(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}