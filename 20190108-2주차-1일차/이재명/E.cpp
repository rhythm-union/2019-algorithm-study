#include <stdio.h>
#define M 1000000000
int dp[2][10];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<10;i++) dp[1][i]=1;
	for(int i=2;i<=N;i++){
		int nxt=i%2, cnt=(i-1)%2;
		for(int j=0;j<10;j++){
			dp[nxt][j]=0;
			for(int k=-1;k<=1;k+=2){
				if(0<=j+k&&j+k<10){
					dp[nxt][j]+=dp[cnt][j+k];
					dp[nxt][j]%=M;
				}
			}
		}
	}
	int sum=0;
	for(int i=0;i<10;i++){
		sum+=dp[N%2][i];
		sum%=M;
	}
	printf("%d",sum);
}
