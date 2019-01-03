#include <stdio.h>
#include <string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char txt[51]={0,};
		scanf("%s",txt);
		int len=strlen(txt);
		int sum=0,sw=1;
		for(int i=0;i<len;i++){
			sum+=(txt[i]=='(')*2-1;
			if(sum<0) sw=0;
		}
		printf("%s\n",(sw&&(sum==0))?"YES":"NO");
	}
}
