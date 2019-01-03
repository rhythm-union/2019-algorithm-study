#include <list>
#include <stdio.h>
using namespace std;
list<int> l;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++) l.push_back(i);
	auto it = l.begin();
	int cnt=0;
	printf("<");
	while(!l.empty()){
		for(int i=0;i<(M-1)%l.size();i++){
			it++;
			if(it==l.end()) it=l.begin();
		}
		if(cnt==0) printf("%d",*it),cnt++;
		else printf(", %d",*it);
		it=l.erase(it);
		if(it==l.end()) it=l.begin();
	}
	printf(">");
}

