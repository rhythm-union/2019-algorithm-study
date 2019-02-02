#include <stdio.h>
#include <string.h>
char txt[10000001];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int B;
		scanf("%d %s",&B,txt);
		int len=strlen(txt);
		int sum=0;
		for(int i=0;i<len;i++){
			sum+=num=txt[i]-'0';
		}
		printf("%d\n",sum);
		memset(txt,0,sizeof(txt));
	}
}
