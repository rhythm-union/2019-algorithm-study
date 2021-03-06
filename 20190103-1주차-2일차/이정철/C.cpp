#include <cstdio>
#include <algorithm>
#include <queue>
#pragma warning(disable:4996)
std::queue<int> q;
int main()
{
	int n, m, imsi;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	printf("<");
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m - 1; j++)
			{
				imsi = q.front();
				q.pop();
				q.push(imsi);
			}
			printf("%d", q.front());
			if (i >= n - 1)
			{
				printf(">");
			}
			else
			{
				printf(", ");
			}
			q.pop();
		}
    return 0;
}