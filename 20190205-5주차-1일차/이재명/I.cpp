#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int map[101][101];
int visit[101][101];
int N,M;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
vector<int> v;
int chk(int x,int y){
	return 0<=x&&x<N&&0<=y&&y<M;
}
int dfs(int x,int y){
	visit[x][y]=1;
	int ret=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(chk(nx,ny)){
			if(map[nx][ny]==0&&visit[nx][ny]==0) ret+=dfs(nx,ny);
		}
	}
	return ret;
}
int main(){
	scanf("%d %d",&N,&M);
	int k;
	scanf("%d",&k);
	while(k--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int i=b;i<d;i++) for(int j=a;j<c;j++) map[i][j]=1;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(map[i][j]==0&&visit[i][j]==0){
				v.push_back(dfs(i,j));
			}
		}
	}
	printf("%d\n",v.size());
	sort(v.begin(),v.end());
	for(auto it : v) printf("%d ",it);	
}
