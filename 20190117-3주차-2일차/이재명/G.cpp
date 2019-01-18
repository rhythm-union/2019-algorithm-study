#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int udp[1001], ddp[1001];
int arr[1001];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	for(int i=0;i<N;i++){
		udp[i]=1;
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]) udp[i]=max(udp[i],udp[j]+1);
		}
	}
	for(int i=N-1;i>=0;i--){
		ddp[i]=1;
		for(int j=N-1;j>i;j--){
			if(arr[j]<arr[i]) ddp[i]=max(ddp[i],ddp[j]+1);
		}
	}
	int ans=-1;
	for(int i=0;i<N;i++){
		ans=max(ans,udp[i]+ddp[i]-1);
	}
	printf("%d",ans);
}
