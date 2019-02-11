#include <stdio.h>
int map[101][101];
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[a][b]=map[b][a]=1;
	}
	map[1][1]=1;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			for(int k=1;k<=N;k++){
				map[j][k]|=map[j][i]&map[i][k];
			}
		}
	}
	int sum=0;
	for(int i=2;i<=N;i++) sum+=map[1][i];
	printf("%d",sum);
}
