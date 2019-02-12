#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int> > map;
int par[100001];
void DFS(int x){
	for(auto nx : map[x]){
		if(par[nx]==0){
			par[nx]=x;
			DFS(nx);
		}
	}
}
int main(){
	int N;
	scanf("%d",&N);
	map.resize(N+1);
	for(int i=0;i<N-1;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	par[1]=1;
	DFS(1);
	for(int i=2;i<=N;i++) printf("%d\n",par[i]);
	
}
