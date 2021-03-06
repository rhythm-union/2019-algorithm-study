#include <iostream>
#include <vector>
using namespace std;
int n, s, ans = 0;
vector<int> v;
int DFS(int cnt, int sum, int length);
int main()
{
	int temp;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	DFS(0, 0, 0);
	cout << ans;
	return 0;
}

int DFS(int cnt, int sum, int length)
{
	if (cnt == n)
	{
		if (sum == s && length != 0)
		{
			ans++;
		}
		return 0;
	}
	DFS(cnt + 1, sum + v[cnt], length + 1);
	DFS(cnt + 1, sum, length);
	return 0;
}