#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int v[3403];
int w[3403];
int dp[2][12881];
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++) scanf("%d %d",w+i,v+i);
	for(int i=0;i<N;i++){
		int nxt=i%2;
		int cnt=1-nxt;
		for(int j=0;j<=M;j++){
			dp[nxt][j]=dp[cnt][j];
			if(j>=w[i]) dp[nxt][j]=max(dp[nxt][j],dp[cnt][j-w[i]]+v[i]);
		}
	}
	printf("%d",dp[(N-1)%2][M]);
}
