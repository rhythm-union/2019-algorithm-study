#include <stdio.h>
typedef long long ll;
ll mpower(ll a, ll n){
	if(n==0) return 1;
	else if(n==1) return a;
	else{
		ll ret=mpower(a,n/2);
		if(n%2) return ret*ret*a;
		else return ret*ret;
	}
}
int main(){
	ll N;
	scanf("%lld",&N);
	ll ans=1;
	for(ll i=2;i*i<=N;i++){
		ll cnt = 0;
		while(N%i==0){
			cnt++;
			N/=i;
		}
		if(cnt==0) continue;
		else if(cnt==1) ans*=i-1;
		else ans*=mpower(i,cnt-1)*(i-1);
	}
	if(N!=1) ans*=N-1;
	printf("%lld",ans);
}
