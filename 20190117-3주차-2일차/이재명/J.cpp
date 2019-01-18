#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))
char str1[1001], str2[1001];
int dp[1001][1001];
void bt(int x,int y){
	if(x==0||y==0) return;
	if(dp[x-1][y]==dp[x][y]) return bt(x-1,y);
	if(dp[x][y-1]==dp[x][y]) return bt(x,y-1);
	bt(x-1,y-1);
	printf("%c",str1[x-1]);
} 
int main(){
	scanf("%s",str1);
	scanf("%s",str2);
	int N=strlen(str1), M=strlen(str2);
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(str1[i-1]==str2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	printf("%d\n",dp[N][M]);
	bt(N,M);
}
