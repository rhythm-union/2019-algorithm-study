#include <iostream>
#include <algorithm>
using namespace std;
int a[1000001];
int main() {
	int n, b, c;
	long long count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		count++;
		if (a[i] > 0)
		{
			if (a[i] % c == 0)
			{
				count += (a[i] / c);
			}
			else
			{
				count += (a[i] / c) + 1;
			}
		}
	}
	cout << count;
	return 0;
}