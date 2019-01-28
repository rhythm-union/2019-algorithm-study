#include <stdio.h>
int arr[2188][2188];
int cnt[3];
void sol(int N,int x,int y){
	if(N==1){
		cnt[arr[x][y]+1]++;
	}
	else{
		int s=arr[x][y];
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(s!=arr[x+i][y+j]){
					for(int dx=0;dx<3;dx++){
						for(int dy=0;dy<3;dy++){
							sol(N/3,x+dx*N/3,y+dy*N/3);
						}
					}
					return;
				}
			}
		}
		cnt[s+1]++;
	}
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) for(int j=0;j<N;j++) scanf("%d",&arr[i][j]);
	sol(N,0,0);
	for(int i=0;i<3;i++) printf("%d\n",cnt[i]);
}
