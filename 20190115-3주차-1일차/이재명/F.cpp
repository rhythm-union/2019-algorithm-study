#include <stdio.h>
void bt(long long int sum, int b){
	if(sum/b!=0) bt(sum/b,b);
	printf("%d ",sum%b);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	long long int sum=0;
	int m;
	scanf("%d",&m);
	while(m--){
		int t;
		scanf("%d",&t);
		sum=sum*a+t;
	}
	bt(sum,b);
}
