#include <iostream>
#include <algorithm>
using namespace std;
long long a[2000002];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n; i < m + n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + (m + n));
	for (int i = 0; i < m + n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}