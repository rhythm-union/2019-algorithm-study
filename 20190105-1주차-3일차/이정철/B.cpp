#include <iostream>
//#include <algorithm>
using namespace std;
bool Check(int num);
int main() {
	int num, i;
	cin >> num;
	for (i = num; i >= 4; i--)
	{
		if (Check(i) == true)
		{
			break;
		}
	}
	cout << i;
	return 0;
}

bool Check(int num)
{
	while (num)
	{
		int div = num % 10;
		num /= 10;
		if (div == 4 || div == 7)
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}