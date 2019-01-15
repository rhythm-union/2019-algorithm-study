#include <stdio.h>
long long int dp[32][32];
int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	if(N<N-K) K=N-K;
	dp[0][0]=1;
	for(int i=1;i<N;i++){
		dp[i][0]=1;
		for(int j=1;j<=i;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	printf("%lld",dp[N-1][K-1]);
}
