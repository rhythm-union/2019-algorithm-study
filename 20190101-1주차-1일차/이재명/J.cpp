#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int arr[10];
int visit[10];
int n;
int func(int t, int cnt,int nxt){
	int sum=abs(arr[cnt]-arr[nxt]);
	if(t==n) return sum;
	int max=-1;
	for(int i=0;i<n;i++){
		if(!visit[i]){
			visit[i]=1;
			int tmp=func(t+1,nxt,i);
			visit[i]=0;
			max=max>tmp?max:tmp;
		}
	}
	return sum+max;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",arr+i);
	sort(arr,arr+n);
	int sum=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				visit[i]=visit[j]=1;
				int tmp=func(2,i,j);
				visit[i]=visit[j]=0;
				sum=sum>tmp?sum:tmp;
			}
		}
	}
	printf("%d",sum);
}
