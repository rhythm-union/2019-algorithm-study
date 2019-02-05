#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
char map[26][26];
int visit[26][26];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int N;
vector<int> list;
int chk(int x,int y){
	return 0<=x&&x<N&&0<=y&&y<N;
}
int DFS(int x,int y){
	visit[x][y]=1;
	int ret=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(chk(nx,ny)){
			if(visit[nx][ny]==0&&map[nx][ny]=='1'){
				ret+=DFS(nx,ny);
			}
		}
	}
	return ret;
}
int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%s",map[i]);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(map[i][j]=='1'&&visit[i][j]==0){
				list.push_back(DFS(i,j));
			}
		}
	}
	sort(list.begin(),list.end());
	printf("%d\n",list.size());
	for(auto it : list) printf("%d\n",it);
}
