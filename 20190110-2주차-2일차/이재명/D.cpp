#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int L,N;
		cin>>L>>N;
		int arr[2]={-1,-1};
		for(int i=0;i<N;i++){
			int tmp;
			cin>>tmp;
			int brr[2]={tmp,L-tmp};
			if(brr[0]>brr[1]) swap(brr[0],brr[1]);
			arr[0]=max(arr[0],brr[0]);
			arr[1]=max(arr[1],brr[1]);
		}
		cout<<arr[0]<<' '<<arr[1]<<'\n';
	}
}
