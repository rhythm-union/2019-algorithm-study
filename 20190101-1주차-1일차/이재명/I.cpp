#include <stdio.h>
#include <vector>
using namespace std;
int n;
int visit[9];
vector<int> v;
void backtrack(int x){
	if(x==n){
		for(auto it : v){
			printf("%d ",it);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		if(visit[i]==0){
			v.push_back(i);
			visit[i]=1;
			backtrack(x+1);
			visit[i]=0;
			v.pop_back();
		}
	}
}
int main(){
	scanf("%d",&n);
	backtrack(0);
}
