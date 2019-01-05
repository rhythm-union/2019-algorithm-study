#include <stdio.h>
int main(){
	int N,ret=4;
	scanf("%d",&N);
	for(int i=1;i<=128;i++){
		int num=i,sum=0;
		while(num>=1){
			num--;
			sum=sum*10+(num%2?7:4);
			num/=2;
		}
		printf("%d\n",sum);
		if(sum<=N){
			ret=ret>sum?ret:sum;
		}
	}
	printf("%d",ret);
}
