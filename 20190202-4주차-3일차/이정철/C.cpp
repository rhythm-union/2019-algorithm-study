#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int b;
		int result = 0;
		cin >> b;
		getchar();
		while (true)
		{
			char c = getchar();
			if (c == '\n')
			{
				break;
			}
			result = (result*b + c - '0') % (b - 1);
		}
		cout << result << endl;
	}
}