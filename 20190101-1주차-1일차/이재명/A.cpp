#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,Max=-1;
	scanf("%d",&n);
	while(n--){
		int arr[4];
		for(int i=0;i<4;i++) scanf("%d",arr+i);
		sort(arr,arr+4);
		int ret=0; 
		if(arr[0]==arr[3]) ret=50000+arr[3]*5000;
		else if(arr[0]==arr[2]||arr[1]==arr[3]) ret=10000+arr[2]*1000;
		else if(arr[0]==arr[1]&&arr[2]==arr[3]) ret=2000+arr[1]*500+arr[3]*500;
		else if(arr[0]==arr[1]) ret=1000+arr[1]*100;
		else if(arr[2]==arr[3]) ret=1000+arr[3]*100;
		else if(arr[1]==arr[2]) ret=1000+arr[2]*100;
		else ret=arr[3]*100;
		Max=max(Max,ret);
	}
	printf("%d",Max);
}
