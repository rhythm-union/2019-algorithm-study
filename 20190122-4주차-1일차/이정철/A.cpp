#include <iostream>
#include <algorithm>
using namespace std;
int n, cnt;
int row[15];
bool promising(int y);
void solution(int y);
int main()
{
	cin >> n;
	solution(0);
	cout << cnt << endl;
	return 0;
}

void solution(int y)
{
	if (y == n)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		row[y] = i;
		if (promising(y))
		{
			solution(y + 1);
		}
	}
}

bool promising(int y)
{
	for (int i = 0; i < y; i++)
	{
		if (row[y] == row[i] || y - i == abs(row[y] - row[i]))
		{
			return false;
		}
	}
	return true;
}