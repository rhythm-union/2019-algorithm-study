#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1001];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	sort(arr,arr+N);
	int sum=0;
	for(int i=0;i<N;i++) sum+=arr[i]*(N-i);
	printf("%d",sum);
}
