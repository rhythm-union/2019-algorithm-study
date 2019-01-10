#include <stdio.h>
int arr[1000001];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	int B,C;
	long long int sum=0;
	scanf("%d %d",&B,&C);
	for(int i=0;i<N;i++){
		sum++;
		arr[i]-=B;
		if(arr[i]>=0) sum+=arr[i]/C+(arr[i]%C?1:0);
	}
	printf("%lld",sum);
}
