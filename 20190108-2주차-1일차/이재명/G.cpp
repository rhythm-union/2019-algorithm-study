#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int dp[2][3];
int arr[100001][2];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		for(int i=0;i<2;i++) for(int j=0;j<N;j++) scanf("%d",&arr[j][i]);
		dp[0][0]=arr[0][0];
		dp[0][1]=arr[0][1];
		dp[0][2]=0;
		for(int i=1;i<N;i++){
			int nxt=i%2, cnt=(i-1)%2;
			dp[nxt][0] = max(dp[cnt][1],dp[cnt][2])+arr[i][0];
			dp[nxt][1] = max(dp[cnt][0],dp[cnt][2])+arr[i][1];
			dp[nxt][2] = max(max(dp[cnt][0],dp[cnt][1]),dp[cnt][2]);
		}
		printf("%d\n",max(max(dp[(N-1)%2][0],dp[(N-1)%2][1]),dp[(N-1)%2][2]));
	}
}
