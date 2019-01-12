#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string, int> m;
string arr[100001];
int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>arr[i];
		m[arr[i]]=i+1;
	}
	for(int i=0;i<M;i++){
		string cmd;
		cin>>cmd;
		try{
			int x=stoi(cmd);
			cout<<arr[x-1]<<'\n';
		}
		catch(invalid_argument){
			cout<<m[cmd]<<'\n';
		}
	}
}
