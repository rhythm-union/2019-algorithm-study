#include <stdio.h>
#include <algorithm>
using namespace std;
	
	int n = 0;
	int arr[8];
	int maxval, total = 0;

int main(){
	
	scanf("%d", &n);
	
	for(int q = 0; q < n; q++){
		scanf("%d", &arr[q]);
	}
		sort(arr, arr+n);
		
		
		do{
			total = 0;
			for(int w = 0; w < n - 1; w++){
				total += abs(arr[w] - arr[w + 1]);
			}
			maxval = max(maxval, total);
		} while (next_permutation(arr, arr+n));
		
		
	printf("%d", maxval);
}
