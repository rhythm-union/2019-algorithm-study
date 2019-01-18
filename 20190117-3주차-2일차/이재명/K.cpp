#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))
char str1[101], str2[101], str3[101];
int dp[101][101][101];
int main(){
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	int N=strlen(str1), M=strlen(str2), L=strlen(str3);
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			for(int k=1;k<=L;k++){
				if(str1[i-1]==str2[j-1]&&str2[j-1]==str3[k-1]){
					dp[i][j][k]=dp[i-1][j-1][k-1]+1;
				}
				else dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
			}
		}
	}
	printf("%d",dp[N][M][L]);
}
