#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int dp[1000001];
int main(){
	int N;
	scanf("%d",&N);
	dp[1]=0;
	for(int i=2;i<=N;i++){
		dp[i]=dp[i-1]+1;
		if(i%3==0) dp[i]=min(dp[i/3]+1,dp[i]);
		if(i%2==0) dp[i]=min(dp[i/2]+1,dp[i]);
	}
	printf("%d",dp[N]);
}
