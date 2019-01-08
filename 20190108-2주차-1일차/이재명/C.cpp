#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int dp[2][3];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<3;i++) scanf("%d", &dp[1][i]);
	for(int i=2;i<=N;i++){
		int nxt=i%2,cnt=(i-1)%2;
		dp[nxt][0]=dp[nxt][1]=dp[nxt][2]=987654321;
		int arr[3];
		for(int j=0;j<3;j++) scanf("%d",arr+j);
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(j==k) continue;
				dp[nxt][j]=min(dp[nxt][j],dp[cnt][k]);
			}
		}
		for(int j=0;j<3;j++) dp[nxt][j]+=arr[j];
	}
	printf("%d",min(dp[N%2][0],min(dp[N%2][1],dp[N%2][2])));
}
