#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int dist[101][101];
const int INF=987654321;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++) for(int j=1;j<=N;j++) if(i!=j) dist[i][j]=INF;
	for(int i=0;i<M;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		dist[a][b]=min(dist[a][b],c);
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			for(int k=1;k<=N;k++){
				if(dist[j][k]>dist[j][i]+dist[i][k]){
					dist[j][k]=dist[j][i]+dist[i][k];
				}
			}
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			printf("%d ",dist[i][j]==INF?0:dist[i][j]);
		}
		printf("\n");
	}
	
}
