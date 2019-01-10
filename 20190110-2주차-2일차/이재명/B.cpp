#include <stdio.h>
#include <algorithm>
#include <utility>
using namespace std;
pair<int,int> arr[100001];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		arr[i]=make_pair(b,a);
	}
	sort(arr,arr+N);
	int cnt=0, lst=0;
	for(int i=0;i<N;i++){
		if(lst<=arr[i].second){
			lst=arr[i].first;
			cnt++;
		}
	}
	printf("%d",cnt);
}
