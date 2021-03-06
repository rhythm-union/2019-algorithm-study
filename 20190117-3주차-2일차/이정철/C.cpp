#include <iostream>
#include <algorithm>
using namespace std;
pair <int, int> s[101];
int lis[101];
int n;
void LIS();
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		cin >> s[i].first >> s[i].second;
	}
	sort(s, s + n + 1);
	LIS();
	int maxnum = 0;
	for (int i = 0; i <= n; i++) 
	{
		maxnum = max(lis[i], maxnum);
	}
	cout << n - maxnum;
}

void LIS() 
{
	lis[0] = 1;
	for (int i = 1; i <= n; i++) 
	{
		lis[i] = 1;
		for (int j = 1; j < i; ++j) 
		{
			if (s[j].second < s[i].second && lis[j] + 1 > lis[i])
			{
				lis[i] = lis[j] + 1;
			}
		}
	}
}