#include <cstdio>
#include <algorithm>
#include <cstring>
#pragma warning(disable:4996)
char two[1000002] = { '0','0' };
int main() {
	int twolen;
	scanf("%s", two + 2);
	twolen = strlen(two);
	for (int i = twolen % 3; i < twolen; i += 3)
	{
		printf("%d", (two[i] - '0') * 4 + (two[i + 1] - '0') * 2 + (two[i + 2] - '0'));
	}
	return 0;
}