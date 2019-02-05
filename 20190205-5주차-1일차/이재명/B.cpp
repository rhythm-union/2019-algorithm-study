#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int> >map;
int visit[101];
int dfs(int x){
	visit[x]=1;
	int cnt=1;
	for(auto it : map[x]){
		if(!visit[it]){
			cnt+=dfs(it);
		}
	}
	return cnt;
}
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	map.resize(N+1);
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	printf("%d",dfs(1)-1);
}
