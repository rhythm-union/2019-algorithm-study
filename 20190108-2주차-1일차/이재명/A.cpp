#include <stdio.h>
int dp[3]={0,1};
int main(){
	int N;
	scanf("%d",&N);
	for(int i=2;i<=N;i++) dp[i%3]=dp[(i-1)%3]+dp[(i-2)%3];
	printf("%d",dp[N%3]);
}
