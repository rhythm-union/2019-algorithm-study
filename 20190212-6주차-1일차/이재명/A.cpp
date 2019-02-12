#include <stdio.h>
int tree[26][2];
void sol(int x,int sw){
	if(x<0) return;
	if(sw==0) printf("%c",x+'A');
	sol(tree[x][0],sw);
	if(sw==1) printf("%c",x+'A');
	sol(tree[x][1],sw);
	if(sw==2) printf("%c",x+'A');
}
int main(){
	int N;
	scanf("%d\n",&N);
	for(int i=0;i<N;i++){
		char a,b,c;
		scanf("%c %c %c\n",&a,&b,&c);
		a-='A';
		b-='A';
		c-='A';
		tree[a][0]=b;
		tree[a][1]=c;
	}
	for(int i=0;i<3;i++){
		sol(0,i);
		printf("\n");
	}
}
