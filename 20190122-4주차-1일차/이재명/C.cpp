#include <stdio.h>
char map[20][21];
int R,C;
int ret;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int chk(int x,int y){
	return 0<=x&&x<R&&0<=y&&y<C;
}
void bt(int t, int x, int y, int visit){
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(chk(nx,ny)){
			if((visit&(1<<(map[nx][ny]-'A')))==0){
				bt(t+1,nx,ny,visit|(1<<(map[nx][ny]-'A')));
			}
		}
	}
	ret=ret>t?ret:t;
}
int main(){
	scanf("%d %d",&R,&C);
	for(int i=0;i<R;i++) scanf("%s",map[i]);
	bt(1,0,0,1<<(map[0][0]-'A'));
	printf("%d",ret);
}
