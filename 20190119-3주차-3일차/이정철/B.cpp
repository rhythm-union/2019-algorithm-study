#include <iostream>
#include <algorithm>
using namespace std;
int m[2][12881];//n,hp
int W[3403];
int D[3403];
int main()
{
	int n, M;
	cin >> n >> M;
	for (int i = 1; i <= n; i++)
	{
		cin >> W[i] >> D[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int now = i % 2;
		int prev = (i - 1) % 2;
		for (int j = 1; j <= M; j++)
		{
			if (j >= W[i])
			{
				m[now][j] = max(m[prev][j], m[prev][j - W[i]] + D[i]);
			}
			else
			{
				m[now][j] = m[prev][j];
			}
		}
	}
	cout << m[n % 2][M];
	return 0;
}