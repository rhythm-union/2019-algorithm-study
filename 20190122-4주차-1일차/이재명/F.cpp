#include <stdio.h>
#include <stdlib.h>
char arr[81];
int N;
void bt(int x){
	for(int i=1;i<=x/2;i++){
		bool isbad=true;
		for(int j=0;j<i;j++){
			if(arr[x-1-j]!=arr[x-1-j-i]){
				isbad=false;
				break;
			}
		}
		if(isbad) return;
	}
	if(x==N){
		printf("%s",arr);
		exit(0);
	}
	for(int i=1;i<=3;i++){
		arr[x]='0'+i;
		bt(x+1);
		arr[x]=0;
	}
}
int main(){
	scanf("%d",&N);
	bt(0);
}
