#include <iostream>
#include <algorithm>
using namespace std;
int Hobbit[9];
int main() {
	int i, j;
	int sum = 0;
	for (i = 0; i < 9; i++)
	{
		cin >> Hobbit[i];
	}
	for (i = 0; i < 9; i++)
	{
		sum += Hobbit[i];
	}
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if (sum - (Hobbit[i] + Hobbit[j]) == 100)
			{
				Hobbit[i] = 100;
				Hobbit[j] = 100;
				sort(Hobbit, Hobbit + 9);
				for (i = 0; i < 7; i++)
				{
					cout << Hobbit[i] << endl;
				}
				return 0;
			}
		}
	}
	return 0;
}