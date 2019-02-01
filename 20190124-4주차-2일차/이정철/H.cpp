#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char star[2188][2188];
void solve(int y, int x, int num);
int main()
{
	int n;
	cin >> n;
	memset(star, ' ', sizeof(star));
	solve(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << star[i][j];
		}
		cout << endl;
	}
	return 0;
}

void solve(int y, int x, int num)
{
	if (num == 1)
	{
		star[y][x] = '*';
		return;
	}
	int div = num / 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				;
			}
			else
			{
				solve(y + (i*div), x + (j*div), div);
			}
		}
	}
}