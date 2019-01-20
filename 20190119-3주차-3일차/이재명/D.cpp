#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[5][10001];
int num[5];
int w[5]={1,5,10,25,};
int par[5][10001];
void bt(int x,int y){
	if(x!=0) bt(x-1,par[x][y]);
	printf("%d ",(y-par[x][y])/w[x]);
}
int main(){
	int W;
	scanf("%d",&W);
	for(int i=0;i<4;i++) scanf("%d",num+i);
	for(int i=0;i<=num[0];i++) dp[0][i]=i;
	for(int i=1;i<4;i++){
		for(int j=0;j<=W;j++){
			for(int l=0;l<=min(num[i],j/w[i]);l++){
				if((j-l*w[i])>0&&dp[i-1][j-l*w[i]]==0) continue;
				if(dp[i][j]<dp[i-1][j-l*w[i]]+l){
					dp[i][j]=dp[i-1][j-l*w[i]]+l;
					par[i][j]=j-l*w[i];
				}
			}
		}
	}

	if(dp[3][W]==0) printf("0 0 0 0");
	else bt(3,W);
}
