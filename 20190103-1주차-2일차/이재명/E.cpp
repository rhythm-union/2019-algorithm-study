#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string arr[20001];
bool comp(const string& a, const string& b){
	if(a.length()!=b.length()) return a.length()<b.length();
	else return a<b;
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++) cin>>arr[i];
	sort(arr,arr+N,comp);
	auto end = unique(arr,arr+N);
	for(auto it = arr;it!=end;++it) cout<<*it<<'\n';
}
