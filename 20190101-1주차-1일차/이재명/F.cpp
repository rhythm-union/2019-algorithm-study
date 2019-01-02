#include <iostream>
using namespace std;
int a[10001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;cin>>n;
    int check;
    for(int i=0;i<n;i++){ 
        cin>>check;
        a[check]++;
        }
    for(int i=0;i<=10000;i++){
        while(a[i]--) cout<<i<<'\n';
    }
}
