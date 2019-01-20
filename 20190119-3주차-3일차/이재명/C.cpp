#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int v[5001];
int w[5001];
int dp[10001];
int main(){
	int N;
	double W;
	while(scanf("%d %lf",&N,&W),N!=0){
		int M=(int)(W*100);
		for(int i=0;i<N;i++){
			double tmp;
			scanf("%d %lf",v+i,&tmp);
			w[i]=(int)(tmp*100);
		}
		for(int i=0;i<N;i++){
			for(int j=w[i];j<=M;j++){
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}
		printf("%d\n",dp[M]);
	}
}
