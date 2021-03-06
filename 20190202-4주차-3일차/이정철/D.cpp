#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
ull mul(ull x, ull y, ull m) {
	return (ull)((__int128)x * y % m);
}

ull lpow(ull x, ull y, ull m) {
	ull r = 1;
	x %= m;
	while (y) {
		if (y & 1) r = mul(r, x, m);
		x = mul(x, x, m);
		y >>= 1;
	}
	return r;
}

bool MR(ull n, ull a) {
	if (n%a == 0) return 0;
	int cnt = -1;
	ull d = n - 1;
	while (!(d & 1)) {
		d >>= 1;
		cnt++;
	}
	ull p = lpow(a, d, n);
	if (p == 1 or p == n - 1) return 1;
	while (cnt--) {
		p = mul(p, p, n);
		if (p == n - 1) return 1;
	}
	return 0;
}

bool isPrime_MR(ll n) {
	for (auto p : { 2,3,5,7,11,13,17,19,23,29,31,37 }) {
		if (n == p) return 1;
		if (n > 40 && !MR(n, p)) return 0;
	}
	if (n <= 40) return 0;
	return 1;
}

ll PollardRho(ll n) {
	ll x = rand() % (n - 2) + 2;
	ll y = x;
	ll c = rand() % (n - 1) + 1;
	while (true) {
		x = (mul(x, x, n) + c) % n;
		y = (mul(y, y, n) + c) % n;
		y = (mul(y, y, n) + c) % n;
		ll d = __gcd(abs(x - y), n);
		if (d == 1) continue;
		if (!isPrime_MR(d)) return PollardRho(d);
		else return d;
	}
}

void getFactor(ll n, vector<ll>& fac) {
	while (!(n & 1)) {
		n >>= 1;
		fac.push_back(2);
	}
	if (n == 1) return;
	while (!isPrime_MR(n)) {
		ll d = PollardRho(n);
		while (n%d == 0) {
			fac.push_back(d);
			n /= d;
		}
		if (n == 1) break;
	}
	if (n != 1) fac.push_back(n);
}

int main(void) {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	ll n;
	cin >> n;
	if (n == 1) return 0;
	vl fac;
	getFactor(n, fac);
	sort(fac.begin(), fac.end());
	for (auto e : fac) cout << e << "\n";
}