#include <stdio.h>
bool arr[3072][6144];
void star(int N, int x, int y){
	if(N==3){
		arr[x][y]=1;
		arr[x+1][y-1]=arr[x+1][y+1]=1;
		for(int i=-2;i<=2;i++) arr[x+2][y+i]=1;
		return;
	}
	else{
		star(N/2,x,y);
		star(N/2,x+N/2,y-N/2);
		star(N/2,x+N/2,y+N/2);
	}
}
int main(){
	int N;
	scanf("%d",&N);
	star(N,0,N-1);
	for(int i=0;i<N;i++){
		for(int j=0;j<N*2;j++) printf("%c",arr[i][j]?'*':' ');
		if(i!=N-1)printf("\n");
	}
}
