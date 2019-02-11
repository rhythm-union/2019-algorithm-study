#include <stdio.h>
int arr[21];
int main(){
	int N,S,cnt=0;
	scanf("%d %d",&N,&S);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	int f=(1<<N)-1;
    for(int s=f;s;s=((s-1)&f)){
        int sum=0;
        for(int j=0;j<N;j++)
            if(s&(1<<j)) sum+=arr[j];
        if(sum==S) cnt++;
    }
	printf("%d",cnt);
}
