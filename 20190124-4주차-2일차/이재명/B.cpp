#include <stdio.h>
typedef long long ll;
ll mpower(ll a, ll n, ll m){
	if(n==0) return 1;
	else if(n==1) return a%m;
	else{
		ll ret=mpower(a,n/2,m);
		if(n%2==0) return (ret*ret)%m;
		else return (((ret*ret)%m)*(a%m))%m;
	}
}
int main(){
	ll A,B,C;
	scanf("%lld %lld %lld",&A,&B,&C);
	printf("%lld",mpower(A,B,C));
}
