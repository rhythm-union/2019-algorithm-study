#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string num;
	int arr[10] = { 0, };
	int sum = 0;
	cin >> num;
	for (int i = 0; i < num.length(); i++)
	{
		sum += num[i] - '0';
		arr[num[i] - '0']++;
	}
	if (arr[0] == 0 || sum % 3 != 0)
	{
		cout << "-1";
		return 0;
	}
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i;
		}
	}
    return 0;
}