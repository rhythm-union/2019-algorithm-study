#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[100001];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	sort(arr,arr+N);
	int M;
	scanf("%d",&M);
	while(M--){
		int tmp;
		scanf("%d",&tmp);
		printf("%d\n",binary_search(arr,arr+N,tmp)?1:0);
	}
}
