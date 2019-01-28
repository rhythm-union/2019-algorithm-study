#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
typedef long long ll;
ll arr[100001];
ll sol(int left, int right){
	if(left==right) return arr[left];
	int mid=(right-left)/2+left;
	ll ret=max(sol(left,mid),sol(mid+1,right));
	int l=mid,r=mid+1;
	ll h=min(arr[l],arr[r]);
	ret=max(ret,h*(r-l+1));
	while(left<l||r<right){
		if(l==left) r++;
		else if(r==right) l--;
		else{
			if(arr[l-1]>arr[r+1]) l--;
			else r++;
		}
		h=min(h,min(arr[l],arr[r]));
		ret=max(ret,h*(r-l+1));
	}
	return ret;
}
int main(){
	int N;
	while(scanf("%d",&N),N!=0){
		for(int i=0;i<N;i++) scanf("%lld",arr+i);
		printf("%lld\n",sol(0,N-1));
	}
}
