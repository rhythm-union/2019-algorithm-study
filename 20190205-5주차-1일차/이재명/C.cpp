#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
char map[101][101];
int visit[101][101];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int N,M;
int chk(int x,int y){
	return 0<=x&&x<N&&0<=y&&y<M;
}
void BFS(int sx,int sy){
	queue<pii> q;
	q.push(make_pair(sx,sy));
	visit[sx][sy]=1;
	while(!q.empty()){
		auto [x,y] = q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(chk(nx,ny)){
				if(visit[nx][ny]==0&&map[nx][ny]=='1'){
					visit[nx][ny]=visit[x][y]+1;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
}
int main(){
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++) scanf("%s",map[i]);
	BFS(0,0);
	printf("%d",visit[N-1][M-1]);
}
