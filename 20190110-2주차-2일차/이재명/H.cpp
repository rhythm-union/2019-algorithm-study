#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int a[]={1,min((M-1)/2+1,4),M-(M>=5)-(M>5)};
	printf("%d",a[min(2,N-1)]);
}
