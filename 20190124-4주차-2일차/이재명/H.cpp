#include <stdio.h>
bool arr[2188][2188];
void sol(int N, int x,int y){
	if(N==1){
		arr[x][y]=true;
	}
	else{
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(i!=1||j!=1) sol(N/3,x+i*N/3,y+j*N/3);
			}
		}
	}
}
int main(){
	int N;
	scanf("%d",&N);
	sol(N,0,0);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++) printf("%c",arr[i][j]?'*':' ');
		printf("\n");
	}
}
