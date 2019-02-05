#include <stdio.h>
int map[1001];
int visit[1001];
int N;
void dfs(int x){
	visit[x]=1;
	if(visit[map[x]]==0) dfs(map[x]);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(int i=1;i<=N;i++){
			visit[i]=0;
			scanf("%d",map+i);
		}
		int cnt=0;
		for(int i=1;i<=N;i++){
			if(visit[i]==0){
				cnt++;
				dfs(i);
			}
		}
		printf("%d\n",cnt);
	}
}
