#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	
	for(int i=N-60;i<=N;i++){
		if(i<0){
			i=0;
			continue;
		}
		int num=i,sum=0;
		while(num>0){
			sum+=num%10;
			num/=10;
		}
		if(sum+i==N){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
}
