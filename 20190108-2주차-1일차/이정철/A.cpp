#include <iostream>
using namespace std;
int main()
{
	int pizza[50] = { 0,1 };
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		pizza[i] = pizza[i - 1] + pizza[i - 2];
	}
	cout << pizza[n];
    return 0;
}