#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
char graph[101][101];
bool visit[101][101];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };
//void DFS(int n);
int BFS(int n, int v);
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> graph[i];
	}
	cout << BFS(n, m);
	return 0;
}

//void DFS(int n)
//{
//	cnt++;
//	visit[n] = 1;
//	for (int i = 0; i < com; i++)
//	{
//		if (visit[i + 1] == 1 || graph[n][i + 1] == 0)
//		{
//			continue;
//		}
//		DFS(i + 1);
//	}
//}

int BFS(int n, int m)
{
	queue<pair<pair<int, int>, int>> q;
	q.push(make_pair(make_pair(0, 0), 1));
	visit[0][0] = 1;
	while (!q.empty())
	{
		int x = q.front().first.second;
		int y = q.front().first.first;
		int z = q.front().second;
		q.pop();
		if (x == m - 1 && y == n - 1)
		{
			return z;
		}
		for (int i = 0; i < 4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];
			if (next_x < 0 || next_y < 0 || next_x >= m || next_y >= n)
			{
				continue;
			}
			if (visit[next_y][next_x] == 1)
			{
				continue;
			}
			if (graph[next_y][next_x] != '1')
			{
				continue;
			}
			q.push(make_pair(make_pair(next_y, next_x), z + 1));
			visit[next_y][next_x] = 1;
		}
	}
}