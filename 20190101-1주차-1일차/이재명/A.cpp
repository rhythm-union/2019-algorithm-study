#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int max=-1;
	while(n--){
		int arr[4];
		for(int i=0;i<4;i++) scanf("%d",arr+i);
		sort(arr,arr+4);
		int ret=0; 
		if(arr[0]==arr[3]) ret=50000+arr[0]*5000;
		else if(arr[0]==arr[2]) ret=10000+arr[0]*1000;
		else if(arr[1]==arr[3]) ret=10000+arr[1]*1000;
		else if(arr[0]==arr[1]&&arr[2]==arr[3]) ret=2000+arr[0]*500+arr[2]*500;
		else if(arr[0]==arr[1]) ret=1000+arr[0]*100;
		else if(arr[2]==arr[3]) ret=1000+arr[2]*100;
		else if(arr[1]==arr[2]) ret=1000+arr[1]*100;
		else ret=arr[3]*100;
		max=max>ret?max:ret;
	}
	printf("%d",max);
}
