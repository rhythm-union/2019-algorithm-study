#include <stdio.h>
int N,R,C;
void sol(int N, int x, int y, int sum){
	if(N==1){
		printf("%d",sum);
		return;
	}
	int nx=N/2;
	int sw[2]={(x+nx)<=R,(y+nx)<=C};
	return sol(N/2,x+sw[0]*nx,y+sw[1]*nx,sum+sw[0]*2*nx*nx+sw[1]*nx*nx);
	
}
int main(){
	scanf("%d %d %d",&N,&R,&C);
	sol(1<<N,0,0,0);
}
