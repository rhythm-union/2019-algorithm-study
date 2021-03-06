#include <iostream>
#include <algorithm>
using namespace std;
int Cal[5001];
int price[5001];
int main()
{
	double imsi;
	int n;
	while (cin >> n >> imsi, n != 0)
	{
		int M_Cal[10001] = { 0, };
		int m = (int)(imsi * 100);
		for (int i = 0; i < n; i++)
		{
			double temp;
			cin >> Cal[i] >> temp;
			price[i] = (int)(temp * 100);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = price[i]; j <= m; j++)
			{
				M_Cal[j] = max(M_Cal[j], M_Cal[j - price[i]] + Cal[i]);
			}
		}
		cout << M_Cal[m] << endl;
	}
	return 0;
}