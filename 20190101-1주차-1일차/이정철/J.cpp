#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
int arr[10];
int main() {
	int n, i;
	int sumsum, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	std::sort(arr, arr + n);
	do
	{
		sumsum = 0;
		for (i = 0; i < n - 1; i++)
		{
			sumsum += abs(arr[i] - arr[i + 1]);
		}
		sum = std::max(sum, sumsum);
	} while (std::next_permutation(arr, arr + n));
	printf("%d", sum);
	return 0;
}