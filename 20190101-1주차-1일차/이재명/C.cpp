#include<stdio.h>
#include <string.h>
char txt[65];
int main(){
	int n;
	scanf("%d\n",&n);
	while(n--){
		int tmp;
		fgets(txt,65,stdin);
		if((txt[strlen(txt)-2]-'0')%2) printf("odd\n");
		else printf("even\n");
	}
}
