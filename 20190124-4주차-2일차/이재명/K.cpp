#include <stdio.h>
void sol(int N, int from, int to){
	if(N==1){
		printf("%d %d\n",from,to);
		return;
	}
	sol(N-1,from,6-from-to);
	sol(1,from,to);
	sol(N-1,6-from-to,to);
}
int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",(1<<N)-1);
	sol(N,1,3);
	
}
