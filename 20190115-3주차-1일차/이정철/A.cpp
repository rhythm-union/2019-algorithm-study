#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int GCD(int num1, int num2);
int LCM(int num1, int num2);
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << GCD(num1, num2) << endl << LCM(num1, num2);
    return 0;
}

int GCD(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1;
	}
	else
	{
		return GCD(num2, num1%num2);
	}
}

int LCM(int num1, int num2)
{
	return (num1*num2) / GCD(num1, num2);
}