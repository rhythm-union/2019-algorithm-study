#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char string[100] = { 0, };
		scanf("%s", string);
		for (int j = 0; j < 100; j++)
		{
			if (string[j] == NULL)
			{
				if (string[j - 1] % 2 == 1)
				{
					printf("odd\n");
				}
				else
				{
					printf("even\n");
				}
				break;
			}
		}
	}
    return 0;
}