#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int GCD(int num1, int num2);
typedef struct
{
	int u;
	int d;
}bunsu;
int main()
{
	bunsu num1;
	bunsu num2;
	bunsu sum;
	cin >> num1.u >> num1.d >> num2.u >> num2.d;
	num1.u = num1.u* num2.d;
	num2.u = num2.u* num1.d;
	sum.u = num1.u + num2.u;
	sum.d = num1.d * num2.d;
	int temp = GCD(sum.u, sum.d);
	cout << sum.u / temp << " " << sum.d / temp;
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