#include <iostream>
#include <algorithm>
using namespace std;
int package[51];
int one[51];
int main() {
	int n, m;
	int cost = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> package[i] >> one[i];
	}
	sort(package, package + m);
	sort(one, one + m);
	while (n > 0)
	{
		if (n >= 6 && package[0] < 6 * one[0])
		{
			n -= 6;
			cost += package[0];
		}
		else if (n < 6 && package[0] < n*one[0])
		{
			cost += package[0];
			n -= 6;
		}
		else
		{
			cost += one[0] * n;
			n -= n;
		}
	}
	cout << cost;
	return 0;
}