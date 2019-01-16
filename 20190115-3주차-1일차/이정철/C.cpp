#include <iostream>
#pragma warning(disable:4996)
using namespace std;
char era[246913];
int n;
int main()
{
	int count;
	era[1] = 1;
	for (int i = 2; i <= 246912; i++)
	{
		if (era[i] == 1)
		{
			continue;
		}
		for (int j = i * 2; j <= 246912; j += i)
		{
			era[j] = 1;
		}
	}
	while (true)
	{
		count = 0;
		cin >> n;
		if (n <= 0)
		{
			break;
		}
		for (int i = n + 1; i <= n * 2; i++)
		{
			if (!era[i])
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}