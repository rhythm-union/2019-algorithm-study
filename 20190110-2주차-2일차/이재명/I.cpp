#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[2][10001];
int main(){
	int n;
	scanf("%d",&n);
	int cnt[2]={0,0};
	int sum=0,wildcard=0;
	for(int i=0;i<n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(tmp>1) arr[0][cnt[0]++]=tmp;
		else if(tmp<0) arr[1][cnt[1]++]=-tmp;
		else if(tmp==1) sum++;
		else if(tmp==0) wildcard=1;
	}
	if(cnt[0]!=0){
		sort(arr[0],arr[0]+cnt[0]);
		int i=cnt[0]-1;
		for(;i>0;i-=2) sum+=arr[0][i]*arr[0][i-1];
		if(i==0) sum+=arr[0][0];
	}
	if(cnt[1]!=0){
		sort(arr[1],arr[1]+cnt[1]);
		int i=cnt[1]-1;
		for(;i>0;i-=2) sum+=arr[1][i]*arr[1][i-1];
		if(i==0&&(!wildcard)) sum-=arr[1][0];
	}
	printf("%d",sum);
}
