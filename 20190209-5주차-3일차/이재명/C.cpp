#include <stdio.h>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
using namespace std;
typedef pair<int,int> pii;
int dist[20001];
vector<vector<pii> > map;
int visit[20001];
const int INF=987654321;
priority_queue<pii,vector<pii>,greater<pii> > pq;
int main(){
	int N,M,S;
	scanf("%d %d %d",&N,&M,&S);
	map.resize(N+1);
	for(int i=0;i<M;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		map[a].push_back(make_pair(b,c));
	}
	for(int i=1;i<=N;i++) dist[i]=INF;
	dist[S]=0;
	pq.push(make_pair(dist[S],S));
	while(!pq.empty()){
		while((!pq.empty())&&(visit[pq.top().second])) pq.pop();
		if(pq.empty()) break;
		auto [dis,a]=pq.top();
		pq.pop();
		visit[a]=1;
		for(auto it : map[a]){
			auto [b,c]=it;
			if(dist[b]>dist[a]+c){
				dist[b]=dist[a]+c;
				pq.push(make_pair(dist[b],b));
			}
		}
	}
	for(int i=1;i<=N;i++){
		if(dist[i]==INF) printf("INF\n");
		else printf("%d\n",dist[i]);
	}
}
