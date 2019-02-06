#include <stdio.h>
int map[101][101];
const int INF=987654321;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++) for(int j=1;j<=N;j++) if(i!=j) map[i][j]=INF;
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[a][b]=1;
		map[b][a]=1;
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			for(int k=1;k<=N;k++){
				if(map[j][k]>map[j][i]+map[i][k]){
					map[j][k]=map[j][i]+map[i][k];
				}
			}
		}
	}
	int Min=INF,idx=-1;
	for(int i=1;i<=N;i++){
		int sum=0;
		for(int j=1;j<=N;j++) sum+=map[i][j];
		if(Min>sum){
			Min=sum;
			idx=i;
		}
	}
	printf("%d",idx);
}
