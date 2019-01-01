#include <stdio.h>
#include <algorithm>
using namespace std;
char txt[60];
int main(){
	int N;
	scanf("%d",&N);
	scanf("%s",txt);
	for(int i=0,j=1;i<N;i+=j,j++){
		printf("%c",txt[i]);
	}
}
