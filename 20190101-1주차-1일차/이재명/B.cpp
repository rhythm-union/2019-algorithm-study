#include <stdio.h>
#include <algorithm> 
using namespace std;
int arr[9];
int main(){
	int sum=0;
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	sort(arr,arr+9);
	int cha=sum-100;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if((arr[j]+arr[i])==cha){
				for(int k=0;k<9;k++) if(k!=i&&k!=j) printf("%d\n",arr[k]);
				return 0;
			}
		}
	}	
}
