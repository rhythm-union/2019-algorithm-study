#include <iostream>
#include <algorithm>
using namespace std;
void move(int y, int x, int num);
int main()
{
	int n;
	cin >> n;
	cout << (1 << n) - 1 << endl;
	move(3, 1, n);
	return 0;
}

void move(int y, int x, int num)
{
	if (num == 0)
	{
		return;
	}
	move(6 - x - y, x, num - 1);
	cout << x << " " << y << endl;
	move(y, 6 - x - y, num - 1);
}