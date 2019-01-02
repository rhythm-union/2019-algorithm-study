#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int arr[4];
	
	for(int i = 0; i < 4; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+4);
	int sum = arr[0] * arr[2];
	printf("%d", sum);
}
