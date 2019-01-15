#include <stdio.h>
int gcd(int a,int b){
	return a%b?gcd(b,a%b):b;
}
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=a*d+b*c,y=b*d;
	printf("%d %d",x/gcd(x,y),y/gcd(x,y));
}
