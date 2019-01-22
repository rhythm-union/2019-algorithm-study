#include <stdio.h>
#define abs(x) ((x)>0?(x):-(x))
int visit[100001];
int N,K;
void bt(int t, int x){
	if(t>=visit[K]) return;
	if(x>=K){
		visit[K]=visit[K]<t+x-K?visit[K]:t+x-K;
		return;
	}
	int dx[]={x,1,-1};
	for(int i=0;i<3;i++){
		int nx=x+dx[i];
		if(0<=nx&&nx<=100000){
			if(visit[nx]>t+1){
				visit[nx]=t+1;
				bt(t+1,nx);
			}
		}
	}
}
int main(){
	scanf("%d %d",&N,&K);
	for(int i=0;i<=100000;i++) visit[i]=987654321;
	visit[N]=0;
	visit[K]=abs(N-K);
	bt(0,N);
	printf("%d",visit[K]);
}
