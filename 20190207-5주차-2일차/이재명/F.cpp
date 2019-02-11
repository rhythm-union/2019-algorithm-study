#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm> 
#include <functional>
using namespace std;
vector<vector<int> >v;
priority_queue<int,vector<int>,greater<int> > q;
int N,M;
int indegree[32001];
void bfs(){
	for(int i=1;i<=N;i++) if(indegree[i]==0) q.push(i);
	while(!q.empty()){
		int x=q.top();
		printf("%d ",x);
		q.pop();
		for(auto it : v[x]){
			 if(--indegree[it]==0) q.push(it);
		}
	}
}
int main(){
	scanf("%d %d",&N,&M);
	v.resize(N+1);
	while(M--){
		int a,b;
		scanf("%d %d",&a,&b);
		indegree[b]++;
		v[a].push_back(b);
	}
	for(int i=1;i<=N;i++) sort(v[i].begin(),v[i].end());
	bfs();
}
