#include <iostream>
using namespace std;
char txt[64][65];
int N;
void bt(int t, int x, int y){
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(txt[x][y]!=txt[x+i][y+j]){
				printf("(");
				int dx[]={0,0,t/2,t/2};
				int dy[]={0,t/2,0,t/2};
				for(int i=0;i<4;i++) bt(t/2,x+dx[i],y+dy[i]);
				printf(")");
				return;
			}
		}
	}
	printf("%c",txt[x][y]);
}
int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%s",txt[i]);
	bt(N,0,0);
}
