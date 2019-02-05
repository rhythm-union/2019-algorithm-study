#include <stdio.h>
#include <vector>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;
vector<vector<int> > map;
int visit[10001];
int list[10001];
int N,M,idx;
int dfs(int x){
	visit[x]=idx;
	int ret=1;
	for(auto it : map[x]){
		if(visit[it]!=idx) ret+=dfs(it);
	}
	return ret;
}
int main(){
	scanf("%d %d",&N,&M);
	map.resize(N+1);
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[b].push_back(a);
	}
	for(int i=1;i<=N;i++){
		idx=i;
		list[i]=dfs(i);
	}
	int Max=-1;
	for(int i=1;i<=N;i++) Max=max(Max,list[i]);
	for(int i=1;i<=N;i++) if(Max==list[i]) printf("%d ",i);
}
