#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> dp;
vector<int> path;
int arr[1000001];
int par[1000001];
void bt(int x){
	if(par[x]!=-1) bt(par[x]);
	printf("%d ",arr[x]);
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",arr+i);
	//for(int i=0;i<N;i++) par[i]=-1;
	for(int i=0;i<N;i++){
		int idx=lower_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
		if(idx==dp.size()){
			dp.push_back(arr[i]);
			path.push_back(i);
		}
		else{
			dp[idx]=arr[i];
			path[idx]=i;
		}
		if(idx!=0) par[i]=path[idx-1];
		
	}
	printf("%d\n",dp.size());
	bt(path[path.size()-1]);
}
