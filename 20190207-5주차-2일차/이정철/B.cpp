#include <cstdio>
#pragma warning(disable:4996)
int arr[(1 << 25) / 32];
int main()
{
	int num;
	while (~scanf("%d", &num))
	{
		int quot = num / 32;
		int remain = 1 << (num % 32);
		if (!(arr[quot] & remain))
		{
			arr[quot] += remain;
			printf("%d ", num);
		}
	}
	return 0;
}