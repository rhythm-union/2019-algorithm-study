#include <stdio.h>
#include <tuple>
using namespace std;
typedef long long ll;
const ll BigN=1000000007;
ll fact(ll N){
	if(N==0) return 1;
	ll ret=N;
	while(N>1){
		ret*=--N;
		ret%=BigN;
		
	}
	return ret;
}
ll mpower(ll a, ll n){
	if(n==0) return 1;
	else if(n==1) return a%BigN;
	else{
		ll ret=mpower(a,n/2)%BigN;
		if(n%2) return (((ret*ret)%BigN)*(a%BigN))%BigN;
		else return (ret*ret)%BigN;
	}
	
}
int main(){
	ll N,K;
	scanf("%lld %lld",&N,&K);
	ll nfact = fact(N);
	ll afact = mpower(fact(N-K),BigN-2);
	ll bfact = mpower(fact(K),BigN-2);
	printf("%lld",(nfact*((afact*bfact)%BigN))%BigN);
}
