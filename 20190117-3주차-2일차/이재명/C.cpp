#include <stdio.h>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
vector<int> dp, arr;
int main(){
	int N;
	scanf("%d",&N);
	vector<pair<int,int> > tmp;
	tmp.resize(N);
	for(int i=0;i<N;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		tmp[i]=make_pair(a,b);
	}
	sort(tmp.begin(),tmp.end());
	for(int i=0;i<N;i++){
		arr.push_back(tmp[i].second);
	}
	for(int i=0;i<N;i++){
		int idx=lower_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
		if(idx==dp.size()) dp.push_back(arr[i]);
		else dp[idx]=arr[i];
	}
	printf("%d\n",N-dp.size());
}
