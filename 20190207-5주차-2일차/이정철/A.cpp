#include <iostream>
#include <vector>
using namespace std;
#pragma warning(disable : 4996)
vector<int> v(21, 0);
int main()
{
	int M;
	cin >> M;
	for (int m_idx = 0; m_idx < M; m_idx++)
	{
		char str[5];
		int val;
		scanf("%s", &str);
		if (str[1] != 'l')
		{
			scanf("%d", &val);
		}
		switch (str[0])
		{
		case 'a':
			if (str[1] == 'd')
			{
				v.at(val) = 1;
				break;
			}
			if (str[1] == 'l')
			{
				for (int i = 0; i < 21; i++)
					v.at(i) = 1;
				break;
			}
			break;
		case 'c':
			printf("%d\n", v.at(val));
			break;
		case 'r':
			v.at(val) = 0;
			break;
		case 't':
			v.at(val) ? v.at(val) = 0 : v.at(val) = 1;
			break;
		case 'e':
			for (int i = 0; i < 21; i++)
			{
				v.at(i) = 0;
			}
			break;
		default:
			break;
		}
	}
	return 0;
}