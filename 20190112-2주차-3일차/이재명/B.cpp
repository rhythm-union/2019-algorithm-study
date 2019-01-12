#include <stdio.h>
int main(){
	int a,b,v;
	scanf("%d %d %d",&a,&b,&v);
	printf("%d",(v-a)/(a-b)+((v-a)%(a-b)?2:1));
}
