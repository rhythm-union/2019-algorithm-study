#include <stdio.h>
long long cnt;
int N;
int visit[15];
int diag[2][30];
void bt(int t){
	if(t==N){
		cnt++;
		return;
	}
	for(int i=0;i<N;i++){
		if(visit[i]) continue;
		if(diag[0][t+i]||diag[1][t-i+N]) continue;
		diag[0][t+i]=diag[1][t-i+N]=visit[i]=1;
		bt(t+1);
		diag[0][t+i]=diag[1][t-i+N]=visit[i]=0;
	}
}
int main(){
	scanf("%d",&N);
	bt(0);
	printf("%lld",cnt);
}
