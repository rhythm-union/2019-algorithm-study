#include <cstdio>
#pragma warning(disable:4996)
int main()
{
	int a, b, v, day;
	scanf("%d %d %d", &a, &b, &v);
	day = (v - b - 1) / (a - b) + 1;
	printf("%d", day);
	return 0;
}