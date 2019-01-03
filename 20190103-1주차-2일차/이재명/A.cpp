#include <iostream>
#include <stack>
#include <string>
using namespace std;
string cmd[]={"push","pop","size","empty","top"};
stack<int> s;
int main(){
	freopen("input.txt","r",stdin);
	int N;
	scanf("%d",&N);
	while(N--){
		string ss;
		cin>>ss;
		if(cmd[0]==ss){
			int tmp;
			scanf("%d",&tmp);
			s.push(tmp);
		}
		if(cmd[1]==ss){
			printf("%d\n",s.empty()?-1:s.top());
			if(!s.empty()) s.pop();
		}
		if(cmd[2]==ss){
			printf("%d\n",s.size());
		}
		if(cmd[3]==ss){
			printf("%d\n",s.empty());
		}
		if(cmd[4]==ss){
			if(s.empty()) printf("-1\n");
			else printf("%d\n",s.top());
		}
	}
}
