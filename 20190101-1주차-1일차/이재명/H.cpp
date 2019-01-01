#include <stdio.h>
#include <string.h>
char arr[1000003];
int main(){
	fgets(arr,1000003,stdin);
	int len=strlen(arr)-1;
	int mod=len%3,i=0;
	if(mod==1){
		printf("%c",arr[0]);
		i++;
	}
	if(mod==2){
		printf("%d",(arr[0]-'0')*2+arr[1]-'0');
		i+=2;
	}
	for(;i<len;i+=3){
		printf("%d",(arr[i]-'0')*4+(arr[i+1]-'0')*2+arr[i+2]-'0');
	}
}
