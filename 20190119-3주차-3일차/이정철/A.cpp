#include <iostream>
#include <algorithm>
using namespace std;
int m[21][101];//n,hp
int hp[21];
int happy[21];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> hp[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> happy[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			m[i][j] = m[i - 1][j];
		}
		for (int j = hp[i]; j < 100; j++)
		{
			m[i][j] = max(m[i][j], m[i - 1][j - hp[i]] + happy[i]);
		}
	}
	cout << m[n][99];
	return 0;
}