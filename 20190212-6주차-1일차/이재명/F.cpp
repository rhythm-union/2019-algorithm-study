#include <stdio.h>
int in[100001],post[100001],pos[100001];
int N;
void sol(int in_l, int in_r, int post_l, int post_r){
	if(in_l>in_r) return;
	int root=post[post_r];
	printf("%d ",root);
	int idx=pos[root];
	sol(in_l,idx-1,post_l,post_l+idx-in_l-1);
	sol(idx+1,in_r,post_l+idx-in_l,post_r-1);
	
}
int main(){
	scanf("%d",&N); 
	for(int i=0;i<N;i++){
		 scanf("%d",in+i);
		 pos[in[i]]=i;
	}
	for(int i=0;i<N;i++) scanf("%d",post+i);
	sol(0,N-1,0,N-1);
}
