#include <stdio.h>
int arr[45];
int num[1001];
int main(){
	for(int i=1;i<=44;i++) arr[i]=(i+1)*i/2;
	for(int i=1;i<=44;i++){
		for(int j=1;j<=44;j++){
			for(int k=1;k<=44;k++){
				int sum=arr[i]+arr[j]+arr[k];
				if(sum<=1000) num[sum]=1;
			}
		}
	}
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		printf("%d\n",num[n]);
	}
}
