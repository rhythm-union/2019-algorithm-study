#include <stdio.h>
#include <queue>
#include <functional>
#include <vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> >pq;
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
            int tmp;
			scanf("%d",&tmp);
			pq.push(tmp);
			if(i!=0) pq.pop();
		}
	}
	printf("%d",pq.top());
}
