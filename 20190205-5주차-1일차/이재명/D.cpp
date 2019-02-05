#include <stdio.h>
const int INF = 987654321;
int dist[101][101];

int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&dist[i][j]);
			
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
				dist[j][k]|=dist[j][i]&dist[i][k];
			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",dist[i][j]);
		}
		printf("\n");
	}
}
