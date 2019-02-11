#include <stdio.h>
#include <bitset>
using namespace std;
bitset<33554432> S;
int main(){
	int tmp;
	while(~scanf("%d",&tmp)){
		if(S[tmp]) continue;
		else{
			S[tmp]=true;
			printf("%d ",tmp);
		}
	}
}
