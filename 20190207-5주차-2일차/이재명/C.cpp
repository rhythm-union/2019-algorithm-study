#include <stdio.h>
int dp[2][10][1024];
const int BigN=1000000000;
int main(){
	int N;
	scanf("%d",&N);
	for(int i=1;i<10;i++) dp[1][i][1<<i]=1;
	for(int i=2;i<=N;i++){
		int nxt=i%2;
        int cnt=1-nxt;
        for(int j=0;j<10;j++) for(int k=0;k<1024;k++) dp[nxt][j][k]=0;
		for(int j=0;j<10;j++){
			for(int k=0;k<1024;k++){
				if(j!=0) dp[nxt][j][k|1<<j]+=dp[cnt][j-1][k];
				if(j!=9) dp[nxt][j][k|1<<j]+=dp[cnt][j+1][k];
				dp[nxt][j][k|1<<j]%=BigN;
			}
		}
	}
	long long int sum=0;	
	for(int i=0;i<10;i++){
		sum+=dp[N%2][i][1023];
		sum%=BigN;
	}
	printf("%lld",sum);
}
