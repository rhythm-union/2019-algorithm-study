#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int> >v;
queue<int> q;
vector<int> ans;
int N,M;
int indegree[1001];
void bfs(){
	for(int i=1;i<=N;i++) if(indegree[i]==0) q.push(i);
	while(!q.empty()){
		int x=q.front();
		ans.push_back(x);
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
		int k;
		scanf("%d",&k);
		int pre=-1,cnt;
		for(int i=0;i<k;i++){
			scanf("%d",&cnt);
			if(pre!=-1){
				indegree[cnt]++;
				v[pre].push_back(cnt);
			}
			pre=cnt;
		}
	}
	bfs();
	if(ans.size()==N) for(auto it : ans) printf("%d ",it);
	else printf("0");
}
