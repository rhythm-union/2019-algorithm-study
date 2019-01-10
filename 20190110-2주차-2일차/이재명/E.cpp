#include <iostream>
using namespace std;
char txt[100002];
int arr[10];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>txt;
	int sum=0;
	for(int i=0;txt[i]!=0&&txt[i]!='\n';i++){
		sum+=txt[i]-'0';
		arr[txt[i]-'0']++;
	}
	if(sum%3==0&&arr[0]>0){
		for(int i=9;i>=0;i--)
			for(int j=0;j<arr[i];j++) cout<<i;
	}
	else cout<<-1;	
}
