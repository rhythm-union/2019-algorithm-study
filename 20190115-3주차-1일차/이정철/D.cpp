#include <iostream>
#pragma warning(disable:4996)
using namespace std;
char era[1001];
int main()
{
	int n, k, answer;
	int count = 0;
	cin >> n >> k;
		for (int i = 2; i <= n; i++)
		{
			for (int j = i; j <= n; j += i)
			{
				if (era[j] == 0)
				{
					era[j] = 1;
					count++;
				}
				if (count == k)
				{
					answer = j;
					break;
				}
			}
			if (count == k)
			{
				break;
			}
		}
	cout << answer;
	return 0;
}