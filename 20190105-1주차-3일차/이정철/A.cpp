#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
bool Check(int num);
int main()
{
	int num;
	int count = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (Check(i) == true)
		{
			count++;
		}
	}
	cout << count;
    return 0;
}

bool Check(int num)
{
	if (num < 100)
	{
		return true;
	}
	else
	{
		int num100, num10, num1;
		num1 = num % 10;
		num10 = ((num - num % 10) / 10) % 10;
		num100 = ((num - (num10 * 10 + num1)) / 100);
		if (num100 - num10 == num10 - num1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}