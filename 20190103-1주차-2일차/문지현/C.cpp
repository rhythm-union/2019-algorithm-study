#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;
queue<int> qu;

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int q = 0; q < n; q++){
		qu.push(q + 1);
	}
	printf("<");
	for(int w = 0; w < n; w++){
		for(int e = 0; e < m-1; e++){
			int temp = qu.front();
			qu.pop();
			qu.push(temp);
		}		
		
		printf("%d", qu.front());
		
		if(w == n - 1){
			printf(">");
		} else {
			printf(", ");
		}
		
		qu.pop();
	}
	
	
	
}
