#include <iostream>
#include <algorithm>
using namespace std;
char star[3072][6144];
void solve(int y, int x, int num);
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (j == n * 2 - 1)
			{
				star[i][j] = 'NULL';
			}
			else
			{
				star[i][j] = ' ';
			}
		}
	}
	solve(0, n - 1, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2 - 1; j++)
		{
			cout << star[i][j];
		}
		cout << endl;
	}
	return 0;
}

void solve(int y, int x, int num)
{
	if (num == 3)
	{
		star[y][x] = '*';
		star[y + 1][x - 1] = '*';
		star[y + 1][x + 1] = '*';
		star[y + 2][x - 2] = '*';
		star[y + 2][x - 1] = '*';
		star[y + 2][x] = '*';
		star[y + 2][x + 1] = '*';
		star[y + 2][x + 2] = '*';
		return;
	}
	solve(y, x, num / 2);
	solve(y + (num / 2), x - (num / 2), num / 2);
	solve(y + (num / 2), x + (num / 2), num / 2);
}