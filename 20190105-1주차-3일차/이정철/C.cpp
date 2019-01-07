#include <iostream>
//#include <algorithm>
using namespace std;
int sum(int num);
int main() {
	int num, i;
	cin >> num;
	for (i = 0; i < 1000000; i++)
	{
		if (sum(i) == num)
		{
			cout << i;
			return 0;
		}
	}
	cout << "0";
	return 0;
}

int sum(int num)
{
	int sum = num;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}