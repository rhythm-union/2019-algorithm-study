#include <cstdio>
#include <queue>
#pragma warning(disable: 4996) 
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int input;
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			if (pq.size())
			{
				printf("%d\n", pq.top());
				pq.pop();
			}
			else {
				printf("%d\n", 0);
			}
			break;
		default:
			pq.push(input);
			break;
		}
	}
	return 0;
}