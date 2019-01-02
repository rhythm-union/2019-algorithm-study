#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[8];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) arr[i]=i+1;
	do{
		for(int i=0;i<n;i++) printf("%d ",arr[i]);
		printf("\n");
	}while(next_permutation(arr,arr+n));
}
