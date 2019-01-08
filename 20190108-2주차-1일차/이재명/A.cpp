#include <stdio.h>
int dp[3];
int main(){
	int N;
	scanf("%d",&N);
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=N;i++) dp[i%3]=dp[(i-1)%3]+dp[(i-2)%3];
	printf("%d",dp[N%3]);
}
