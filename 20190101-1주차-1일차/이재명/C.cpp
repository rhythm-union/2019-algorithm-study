#include<stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char txt[65]={0,};
		int tmp;
		scanf("%s",txt);
		printf("%s\n",(txt[strlen(txt)-1]-'0')%2?"odd":"even");
	}
}
