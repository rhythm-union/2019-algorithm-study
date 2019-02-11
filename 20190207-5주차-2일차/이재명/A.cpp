#include <iostream>
#include <string>
using namespace std;
string cmd[]={"add","remove","check","toggle","all","empty"};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int M,S=0;
	cin>>M;
	while(M--){
		string s;
		cin>>s; 
		for(int i=0;i<6;i++){
			if(cmd[i]==s){
				if(i<4){
					int tmp;
					cin>>tmp;
					tmp--;
					if(i==0) S|=1<<tmp;
					else if(i==1) S&=~(1<<tmp);
					else if(i==2) cout<<((S&(1<<tmp))?1:0)<<'\n';
					else S^=1<<tmp;
				}
				else{
					if(i==4) S=(1<<20)-1;
					else S=0;
				}
			}
		}
	}
	
}
