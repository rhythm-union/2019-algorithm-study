#include <iostream>
#pragma warning(disable:4996)
using namespace std;
void bin(unsigned long long n);
int main()
{	
	unsigned long long n;
	cin >> n;
	bin(n);
	return 0;
}

void bin(unsigned long long n)
{
	if (n <= 0)
	{
		return;
	}
	else
	{
		bin(n / 2);
		cout << n % 2;
	}
}