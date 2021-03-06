#include <cstdio>
#pragma warning(disable:4996)
#define INF 100000000
using namespace std;
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int **adj = new int*[n];
	for (int i = 0; i < n; i++)
	{
		adj[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			adj[i][j] = (i == j) ? 0 : INF;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (adj[a - 1][b - 1] > c)
			adj[a - 1][b - 1] = c;
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				adj[i][j] = (adj[i][j] < (adj[i][k] + adj[k][j])) ? adj[i][j] : adj[i][k] + adj[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (adj[i][j] == INF)
			{
				adj[i][j] = 0;
			}
			printf("%d ", adj[i][j]);
		}
		printf("\n");
	}
	return 0;
}