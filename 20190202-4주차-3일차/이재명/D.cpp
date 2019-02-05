#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
vector<ull> list;
ll gcd(ll a,ll b){
    return a%b?gcd(b,a%b):b;
}
ull modmul(ull a, ull b, ull m){
	return (ull)(((__int128)a*(__int128)b)%m);
}
ull modpow(ull a, ull n, ull m){
	if(n==0) return 1;
	else if(n==1) return a%m;
	else{
		ull ret=modpow(a,n/2,m);
		if(n%2) return modmul(modmul(ret,ret,m),a,m);
		else return modmul(ret,ret,m);
	}
}
bool MR(ull n, ull a){
	if(n%a==0) return false;
	int cnt=-1;
	ull d=n-1;
	while(d%2==0){
		d>>=1;
		cnt++;
	}
	ull p = modpow(a, d, n);
	if (p==1||p==n-1) return true;
	while (cnt--) {
		p = modmul(p, p, n);
		if (p == n - 1) return true;
	}
	return false;
}

bool isPrime(ll n) {
	for (auto p : { 2,3,5,7,11,13,17,19,23,29,31,37 }) {
		if (n==p) return true;
		if (n>40&&(MR(n, p)==false)) return false;
	}
	if (n<=40) return false;
	return true;
}
ll rho(ll n){
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<ll> dis(1,n-1);
	ll x = dis(gen);
	ll y = x;
	ll c = dis(gen);
	ll g = 1;
	while (g==1){
		x=(modmul(x,x,n)+c)%n;
		y=(modmul(y,y,n)+c)%n;
		y=(modmul(y,y,n)+c)%n;
		g=gcd(abs(x-y),n);
	}
	return g;
}
void sol(ll n){
	if(n==1) return;
	if(n%2==0){
		list.push_back(2);
		return sol(n/2);
	}
	else if(isPrime(n)){
		list.push_back(n);
		return;
	}
	else{
		ll ret = rho(n);
		sol(n/ret);
		sol(ret);
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll N;
	cin>>N;
	sol(N);
	sort(list.begin(),list.end());
	for(auto it : list) cout<<it<<'\n';
}
