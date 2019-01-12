#include <stdio.h>
int arr[100001];
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	long long int left=-1,right=0;
	for(int i=0;i<N;i++){
		scanf("%d",arr+i);
		right+=arr[i];
		left=left>arr[i]?left:arr[i];
	}
	while(left<=right){
		long long int mid=(right-left)/2+left;
		int num=1;
		long long sum=0;
		for(int i=0;i<N;i++){
			sum+=arr[i];
			if(sum>mid){
				num++;
				sum=arr[i];
			}
		}
		if(num>M) left=mid+1;
		else right=mid-1;
	}
	printf("%lld",left);
}
