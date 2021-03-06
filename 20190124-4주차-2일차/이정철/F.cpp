#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int n;
short paper[2188][2188];
int cnt[3] = { 0 };
void solve(int x, int y, int size);
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &paper[i][j]);
		}
	}
	solve(0, 0, n);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", cnt[i]);
	}
	return 0;
}

void solve(int x, int y, int size)
{
	bool same = true;
	short first = paper[y][x];
	int newsize = size / 3;
	if (size == 1)
	{
		int num = paper[y][x] + 1;
		cnt[num]++;
		return;
	}
	for (int i = y; i < y + size; i++)
	{
		if (!same)
		{
			break;
		}
		for (int j = x; j < x + size; j++)
		{
			if (first != paper[i][j])
			{
				same = false;
				break;
			}
		}
	}
	if (same)
	{
		int num = paper[y][x] + 1;
		cnt[num]++;
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			solve(x + newsize * i, y + newsize * j, newsize);
		}
	}
}