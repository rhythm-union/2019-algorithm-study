#include <iostream>
#include <vector>
#include <queue>
#pragma warning(disable:4996)
using namespace std;
int arr[32002];
vector<int> adj[32002];
priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int from, to;
		scanf("%d %d", &from, &to);
		adj[from].push_back(to);
		arr[to]++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			pq.push(i);
		}
	}
	while (!pq.empty())
	{
		int now = pq.top();
		pq.pop();
		arr[now]--;
		printf("%d ", now);
		for (int next : adj[now])
		{
			arr[next]--;
			if (arr[next] == 0)
			{
				pq.push(next);
			}
		}
	}
	return 0;
}
