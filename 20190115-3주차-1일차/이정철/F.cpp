#include <iostream>
#pragma warning(disable:4996)
using namespace std;
void bin(int dec, int b);
int main()
{	
	int dec = 0;
	int a, b, m, imsi;
	cin >> a >> b >> m;
	while (m--)
	{
		cin >> imsi;
		dec = dec * a + imsi;
	}
	bin(dec, b);
	return 0;
}

void bin(int dec, int b)
{
	if (dec <= 0)
	{
		return;
	}
	else
	{
		bin(dec / b, b);
		cout << dec % b << " ";
	}
}