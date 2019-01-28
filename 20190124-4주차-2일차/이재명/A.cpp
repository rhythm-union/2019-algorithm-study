#include <stdio.h>
#include <vector>
using namespace std;
vector<int> a,b,ret;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	a.resize(N);
	b.resize(M);
	ret.resize(M+N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<M;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0,j=0,p=0;p<M+N;p++){
		if(i==N) ret[p]=b[j++];
		else if(j==M) ret[p]=a[i++];
		else ret[p]=a[i]<b[j]?a[i++]:b[j++];
	}
	for(auto it : ret) printf("%d ",it);
}
