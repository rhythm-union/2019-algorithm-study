#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int v[21];
int w[21];
int dp[2][100];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",w+i);
	for(int i=0;i<N;i++) scanf("%d",v+i);
	for(int i=0;i<N;i++){
		int nxt=i%2;
		int cnt=1-nxt;
		for(int j=0;j<100;j++){
			dp[nxt][j]=dp[cnt][j];
			if(j>=w[i]) dp[nxt][j]=max(dp[nxt][j],dp[cnt][j-w[i]]+v[i]);
		}
	}
	printf("%d",dp[(N-1)%2][99]);
}
