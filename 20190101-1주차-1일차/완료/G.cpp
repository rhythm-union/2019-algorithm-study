#include <stdio.h>
#include <algorithm>
#include<functional>

using namespace std;


int main(){
	
	
	int n = 0;
	scanf("%d", &n);
	if(n > 1000000){
		
	}return 0;
	
	int arr[n];
	for(int q = 0; q < n; q++){
		scanf("%d", &arr[q]);
	}
	
	sort(arr,arr+n,greater<int>());


	
	for(int w = 0; w < n; w++){
		printf("%d\n", arr[w]);
	}
	
	return 0;
}
