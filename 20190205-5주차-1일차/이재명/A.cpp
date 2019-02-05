#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<vector<int> >map;
int visit[1001];
void dfs(int x){
	visit[x]=1;
	printf("%d ",x);
	for(auto it : map[x]){
		if(!visit[it]) dfs(it);
	}
}
void bfs(int s){
	queue<int> q;
	q.push(s);
	visit[s]=1;
	while(!q.empty()){
		int x=q.front();
		printf("%d ",x);
		q.pop();
		for(auto it : map[x]){
			if(!visit[it]){
				visit[it]=1;
				q.push(it);
			}
		}
	}
}
int main(){
	int N,M,V;
	scanf("%d %d %d",&N,&M,&V);
	map.resize(N+1);
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	for(int i=0;i<=N;i++) sort(map[i].begin(),map[i].end());
	dfs(V);
	printf("\n");
	for(int i=0;i<=N;i++) visit[i]=0;
	bfs(V);
}
