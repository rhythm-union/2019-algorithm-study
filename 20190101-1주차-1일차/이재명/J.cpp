#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[8];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",arr+i);
	sort(arr,arr+n);
	int ans=-1;
	do{
		int sum=0;
		for(int i=0;i<n-1;i++) sum+=abs(arr[i]-arr[i+1]);
		ans=max(ans,sum);
	}while(next_permutation(arr,arr+n));
	printf("%d",ans);
}
