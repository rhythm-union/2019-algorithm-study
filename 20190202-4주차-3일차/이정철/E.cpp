#include <cstdio>
using namespace std;
typedef long long ll;
ll N;
ll mpow(ll x, ll y);
int main()
{
	scanf("%lld", &N);
	ll ans = 1;
	for (ll n = 2; n*n <= N; n++)
	{
		ll cnt = 0;
		while (N % n == 0)
		{
			N /= n;
			cnt++;
		}
		if (!cnt)
		{
			continue;
		}
		ans *= mpow(n, cnt) * (n - 1) / n;
	}
	printf("%lld\n", N == 1 ? ans : ans * (N - 1));
	return 0;
}

ll mpow(ll x, ll y)
{
	if (y == 0) return 1LL;
	if (y == 1) return x;
	if (y & 1) return mpow(x, y - 1) * x;
	ll get = mpow(x, y / 2);
	return get * get;
}