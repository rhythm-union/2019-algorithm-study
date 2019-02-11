#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int> pq;
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int tmp;
		scanf("%d",&tmp);
		pq.push(-tmp);
	}
	int sum=0;
	while(pq.size()>1){
		int x=-pq.top();
		pq.pop();
		int y=-pq.top();
		pq.pop();
		sum+=x+y;
		pq.push(-x-y);
	}
	printf("%d",sum);
}
