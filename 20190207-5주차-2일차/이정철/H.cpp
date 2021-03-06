#include <cstdio>
#include <queue>
#pragma warning(disable:4996)
using namespace std;
priority_queue<int, vector<int>, greater<int> > q;
int main()
{
	int a, b, cardcnt, temp;
	int answer = 0;
	scanf("%d", &cardcnt);
	while (cardcnt--)
	{
		scanf("%d", &temp);
		q.push(temp);
	}
	while (q.size() > 1)
	{
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		answer += (a + b);
		q.push(a + b);
	}
	printf("%d", answer);
}