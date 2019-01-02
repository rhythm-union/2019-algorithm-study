#include <stdio.h>
#include <string.h>
char arr[1000001];
int main(){
	scanf("%s",arr);
	int len=strlen(arr);
	for(int i=0,sum=0;i<len%3;i++){
		sum=sum*2+arr[i]-'0';
		if(i+1==len%3) printf("%d",sum);
	}
	for(int i=len%3;i+2-len%3<len;i+=3){
		printf("%d",(arr[i]-'0')*4+(arr[i+1]-'0')*2+arr[i+2]-'0');
	}
}
