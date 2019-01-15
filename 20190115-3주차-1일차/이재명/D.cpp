#include <stdio.h>
int sans[1001];
int main(){
	int N,K,cnt=0;
	scanf("%d %d",&N,&K);
	sans[1]=1;
	for(int i=2;i<=N;i++){
		if(sans[i]) continue;
		for(int j=1;j*i<=N;j++){
			if(sans[i*j]==0){
				cnt++;
				sans[i*j]=1;
			}
			if(cnt==K){
				printf("%d",j*i);
				return 0;
			}
		}
	}
}
