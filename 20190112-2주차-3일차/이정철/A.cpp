#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int a[100001];
int binary(int low, int high, int value);
int main()
{
	int n, m, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b);
		printf("%d\n", binary(0, n - 1, b));
	}
    return 0;
}

int binary(int low, int high, int value)
{
	if (high < low)
	{
		return false;
	}
	else
	{
		int mid = (low + high) / 2;
		if (a[mid] == value)
		{
			return true;
		}
		else if (a[mid] > value)
		{
			return binary(low, mid - 1, value);
		}
		else
		{
			return binary(mid + 1, high, value);
		}
	}
}