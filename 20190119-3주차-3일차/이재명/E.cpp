#include <stdio.h>
int arr[20][301];
int N,M;
int dp[20][301];
int pre[20][301];
void bt(int x, int y){
	if(x>0) bt(x-1,pre[x][y]);
	printf("%d ",y-pre[x][y]);
}
int main(){
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++){
		int tmp;
		scanf("%d",&tmp);
		for(int j=0;j<M;j++) scanf("%d",&arr[j][i]);
	}
	for(int i=0;i<=N;i++) dp[0][i]=arr[0][i];
	for(int i=1;i<M;i++){
		for(int j=0;j<=N;j++){
			for(int k=0;k<=j;k++){
				if(dp[i][j]<dp[i-1][k]+arr[i][j-k]){
					dp[i][j]=dp[i-1][k]+arr[i][j-k];
					pre[i][j]=k;
				}
			}
		}
	}
	printf("%d\n",dp[M-1][N]);
	bt(M-1,N);
}
