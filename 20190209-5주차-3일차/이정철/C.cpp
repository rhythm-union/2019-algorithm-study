#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define INF 100000000
int v, e, k, from, to, weight;
vector<pair<int, int>> graph[20001];
vector<int> dijkstra(int start, int node);
int main()
{
	cin >> v >> e >> k;
	for (int i = 0; i < e; i++)
	{
		cin >> from >> to >> weight;
		graph[from].push_back({ to, weight });
	}
	vector<int> result = dijkstra(k, v + 1);
	for (int i = 1; i < v + 1; i++)
	{
		if (result[i] == INF)
		{
			cout << "INF" << '\n';
		}
		else
		{
			cout << result[i] << '\n';
		}
	}
}

vector<int> dijkstra(int start, int node)
{
	vector<int> dist(node, INF);
	dist[start] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, start });
	while (!pq.empty())
	{
		int weight = pq.top().first;
		int currentnode = pq.top().second;
		pq.pop();
		if (dist[currentnode] < weight)
		{
			continue;
		}
		int neighborNum = graph[currentnode].size();
		for (int i = 0; i < neighborNum; i++)
		{
			int neighbor = graph[currentnode][i].first;
			int distToN = weight + graph[currentnode][i].second;
			if (dist[neighbor] > distToN)
			{
				dist[neighbor] = distToN;
				pq.push({ distToN, neighbor });
			}
		}
	}
	return dist;
}