#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > pq;
int main(){
	int n,tmp;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&tmp);
		if(tmp==0){
			if(pq.empty()) printf("0\n");
			else printf("%d\n",pq.top()),pq.pop();
		}
		else pq.push(tmp);
	}
}

