#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main()
{
	int n, value, v_size;
	cin >> n;
	cin >> value;
	v.push_back(value);
	for (int i = 1; i < n; i++)
	{
		cin >> value;
		v_size = v.size();
		for (int j = v_size - 1; j >= 0; j--)
		{
			if (v.at(j) < value)
			{
				if (j == v_size - 1)
				{
					v.push_back(value);
				}
				else
				{
					v.at(j + 1) = value;
				}
				break;
			}
			if (j == 0)
			{
				v.at(0) = value;
			}
		}
	}
	cout << v.size();
	return 0;
}