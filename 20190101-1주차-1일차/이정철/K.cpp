#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
int main() {
	int w, h, p, q, t;
	scanf("%d %d %d %d %d", &w, &h, &p, &q, &t);
	printf("%d %d", w - abs(w - (p + t) % (w * 2)), h - abs(h - (q + t) % (h * 2)));
	return 0;
}