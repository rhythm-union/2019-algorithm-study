#include <stdio.h>
int arr[63];
int main(){
	long long N,cnt=0;;
	scanf("%lld",&N);
	while(N>0){
		arr[cnt++]=N%2;
		N/=2;
	}
	for(int i=cnt-1;i>=0;i--) printf("%d",arr[i]);
}
