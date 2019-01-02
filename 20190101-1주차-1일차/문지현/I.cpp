#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int n = 0;
	scanf("%d", &n);
	
	if(n > 8){
		return 0;
	}
	
	int arr[n];
	
	for(int q = 0; q < n; q++){
		arr[q] = q+1;
	}
	
	do{
		for(int e = 0; e < n; e++){
			printf("%d ", arr[e]);
		}
		printf("\n");
	} while(next_permutation(arr, arr+n));
	
	return 0;

}
