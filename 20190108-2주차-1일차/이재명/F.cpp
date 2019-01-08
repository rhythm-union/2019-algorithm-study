#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int dp[301][2];
int main(){
	int N;
	scanf("%d",&N);
	scanf("%d",&dp[1][0]);
	for(int i=2;i<=N;i++){
		int tmp;
		scanf("%d",&tmp);
		dp[i%3][0]=max(dp[(i-2)%3][1],dp[(i-2)%3][0])+tmp;
		dp[i%3][1]=dp[(i-1)%3][0]+tmp;
	}
	printf("%d",max(dp[N%3][0],dp[N%3][1]));
}
