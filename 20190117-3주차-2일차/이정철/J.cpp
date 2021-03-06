#include <iostream>
#include <algorithm>
using namespace std;
char str1[1001];
char str2[1001];
int dp[1001][1001];
void out(int i, int j);
int main()
{
	int i, j;
	cin >> str1 + 1 >> str2 + 1;
	for (i = 1; str1[i]; i++)
	{
		for (j = 1; str2[j]; j++)
		{
			dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (str1[i] == str2[j]) });
		}
	}
	cout << dp[i - 1][j - 1]<<'\n';
	out(i - 1, j - 1);
	return 0;
}

void out(int i, int j)
{
	if (i == 0 || j == 0)
	{
		return;
	}
	if (dp[i - 1][j] == dp[i][j])
	{
		return out(i - 1, j);
	}
	if (dp[i][j - 1] == dp[i][j])
	{
		return out(i, j - 1);
	}
	out(i - 1, j - 1);
	cout << str1[i];
}