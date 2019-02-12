#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> pii;
vector<vector<pii> >map;
int dist[100001];
queue<int> q;
int N;
void BFS(int x){
	for(int i=1;i<=N;i++){
		dist[i]=0;
	}
	dist[x]=1;
	q.push(x);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		for(auto it : map[s]){
			auto [e,c] = it;
			if(dist[e]==0){
				dist[e]=c+dist[s];
				q.push(e);
			}
		}
	}
}
int main(){
	scanf("%d",&N);
	map.resize(N+1);
	for(int i=0;i<N;i++){
		int V,e,c;
		scanf("%d",&V);
		while(scanf("%d",&e),e!=-1){
			scanf("%d",&c);
			map[V].push_back({e,c});
		}
	}
	BFS(1);
	int idx=-1,Max=-1;
	for(int i=1;i<=N;i++){
		if(Max<dist[i]){
			idx=i;
			Max=dist[i];
		}
	}
	BFS(idx);
	Max=-1;
	for(int i=1;i<=N;i++){
		if(Max<dist[i]){
			Max=dist[i];
		}
	}
	printf("%d",Max-1);
}
