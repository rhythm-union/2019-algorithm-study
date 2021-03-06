#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int n, k;
int coor[100001];
int BFS();
int main() {
	cin >> n >> k;
	cout << BFS();
	return 0;
}

int BFS()
{
	q.push(n);
	coor[n] = 1;
	while (!q.empty())
	{
		int p = q.front();
		q.pop();
		if (p == k)
		{
			return coor[p] - 1;
		}
		if (p - 1 >= 0 && coor[p - 1] == 0)
		{
			coor[p - 1] = coor[p] + 1;
			q.push(p - 1);
		}
		if (p + 1 <= 100000 && coor[p + 1] == 0)
		{
			coor[p + 1] = coor[p] + 1;
			q.push(p + 1);
		}
		if (p * 2 <= 100000 && coor[p * 2] == 0)
		{
			coor[p * 2] = coor[p] + 1;
			q.push(p * 2);
		}
	}
}