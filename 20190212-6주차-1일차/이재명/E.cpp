#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int tree[10001][2];
int dp[10001];
vector<vector<int> > list;
int find_root(int x){
	if(x==-1) return 0;
	if(dp[x]) return dp[x];
	return dp[x]=find_root(tree[x][0])+find_root(tree[x][1])+1;
}
int sol(int x, int level, int s){
	if(x==-1) return 0;
	int cnt=sol(tree[x][0],level+1,s);
	list[level].push_back(s+cnt+1);
	cnt+=sol(tree[x][1],level+1,s+cnt+1);
	return cnt+1;
}
int main(){
	int N;
	scanf("%d",&N);
	list.resize(N+1);
	for(int i=0;i<N;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		tree[a][0]=b;
		tree[a][1]=c;
	}
	int root=-1;
	for(int i=1;i<=N;i++){
		int cnt=find_root(i);
		if(cnt==N){
			root=i;
			break;
		}
	}
	sol(root,1,0);
	int idx=-1,ans=-1;
	for(int i=1;i<=N;i++){
		if(list[i].empty()) continue;
		sort(list[i].begin(),list[i].end());
		int tmp=list[i][list[i].size()-1]-list[i][0]+1;
		if(tmp>ans){
			ans=tmp;
			idx=i;
		}
	}
	printf("%d %d",idx,ans);
}
