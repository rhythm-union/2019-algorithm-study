#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int graph[1001][1001];
int visit[1001];
int cnt = 0;
int com;
void DFS(int n);
//void BFS(int n, int v);
int main()
{
	int n, x, y;
	cin >> com >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	DFS(1);
	cout << cnt - 1;
	return 0;
}

void DFS(int n)
{
	cnt++;
	visit[n] = 1;
	for (int i = 0; i < com; i++)
	{
		if (visit[i + 1] == 1 || graph[n][i + 1] == 0)
		{
			continue;
		}
		DFS(i + 1);
	}
}

//void BFS(int n, int v)
//{
//	queue<int> q;
//	q.push(v);
//	visit[v] = 0;
//	while (!q.empty())
//	{
//		v = q.front();
//		cout << q.front() << " ";
//		q.pop();
//		for (int i = 0; i < n; i++)
//		{
//			if (visit[i + 1] == 0 || graph[v][i + 1] == 0)
//			{
//				continue;
//			}
//			q.push(i + 1);
//			visit[i + 1] = 0;
//		}
//	}
//}