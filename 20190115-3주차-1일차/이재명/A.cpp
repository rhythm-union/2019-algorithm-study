#include <stdio.h>
int gcd(int a, int b){
	return a%b?gcd(b,a%b):b;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n%d",gcd(a,b),a*b/gcd(a,b));
}
