#include <stdio.h>
int chk(int x){
	if(x<100) return 1;
	else{
		if((x/100)+(x%10)==((x/10)%10)*2) return 1;
		else return 0;
	}
}
int main(){
	int N,sum=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		sum+=chk(i);
	}
	printf("%d",sum);
}
