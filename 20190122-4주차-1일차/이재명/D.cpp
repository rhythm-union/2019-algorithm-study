#include <stdio.h>
int arr[13];
int visit[13];
int K;
void bt(int t, int s){
	if(t==6){
		for(int i=0;i<K;i++) if(visit[i]) printf("%d ",arr[i]);
		printf("\n");
		return;
	}
	for(int i=s;i<K;i++){
		visit[i]=1;
		bt(t+1,i+1);
		visit[i]=0;
	}
}
int main(){
	while(scanf("%d",&K),K!=0){
		for(int i=0;i<K;i++) scanf("%d",arr+i);
		bt(0,0);
		printf("\n");
	}
}
