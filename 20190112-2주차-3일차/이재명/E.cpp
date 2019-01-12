#include <stdio.h>
int main(){
	long long int N;
	scanf("%lld",&N);
	long long int left=0,right=N;
	while(left<=right){
		long long int mid=(right-left)/2+left;
		if(1ull*mid*mid<N) left=mid+1;
		else right=mid-1;
	}
	printf("%lld",left);
}
