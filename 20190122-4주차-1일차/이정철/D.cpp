#include <iostream>
#include <algorithm>
using namespace std;
int lotto[13];
int C[13];
int k;
void DFS(int start, int depth);
int main()
{
	while (cin >> k, k)
	{
		for (int i = 0; i < k; i++)
		{
			cin >> lotto[i];
		}
		DFS(0, 0);
		cout << endl;
	}
	return 0;
}

void DFS(int start, int depth)
{
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << C[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = start; i < k; i++)
	{
		C[depth] = lotto[i];
		DFS(i + 1, depth + 1);
	}
}