#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;
pair<int,int> arr[100001];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			arr[i]=make_pair(a,b);
		}
		sort(arr,arr+N);
		int marge[2]={arr[0].first,arr[0].second};
		int cnt=1;
		for(int i=1;i<N;i++){
			if(marge[0]>arr[i].first||marge[1]>arr[i].second){
				cnt++;
				marge[0]=min(arr[i].first, marge[0]);
				marge[1]=min(arr[i].second, marge[1]);
			}
		}
		printf("%d\n",cnt);
	}
}
