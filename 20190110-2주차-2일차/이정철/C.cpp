#include <iostream>
#include <algorithm>
using namespace std;
int Ptime[1001];
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Ptime[i];
	}
	sort(Ptime, Ptime + n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			sum += Ptime[j];
		}
	}
	cout << sum;
    return 0;
}