#include <stdio.h>
int arr[10];
int main(){
	int n,k,cnt=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",arr+i);
	for(int i=n-1;i>=0;i--){
		while(k>=arr[i]){
            int t=k/arr[i];
			k-=t*arr[i];
			cnt+=t;
		}
	}
	printf("%d",cnt);
}
