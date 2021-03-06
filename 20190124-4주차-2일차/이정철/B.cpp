#include <iostream>
#include <algorithm>
using namespace std;
long long int a, b, c;
long long int pow(long long int a, long long int b);
int main()
{
	cin >> a >> b >> c;
	cout << pow(a, b) % c;
	return 0;
}

long long int pow(long long int a, long long int b)
{
	if (b == 0)
	{
		return 1;
	}
	else if (b == 1)
	{
		return a;
	}
	if (b % 2 > 0)
	{
		return pow(a, b - 1)*a;
	}
	long long int half = pow(a, b / 2);
	half %= c;
	return (half*half) % c;
}