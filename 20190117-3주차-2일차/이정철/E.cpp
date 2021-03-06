#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int arr[100001];
int main()
{
	int n, idx;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (v.empty() || v.back() < arr[i])
		{
			v.push_back(arr[i]);
		}
		else
		{
			idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
			v.at(idx) = arr[i];
		}
	}
	cout << n - v.size();
	return 0;
}