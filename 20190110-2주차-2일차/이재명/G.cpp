#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int PMin=9876,Min=9876;
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		PMin=min(PMin,a);
		Min=min(Min,b);
	}
	printf("%d",min(min(PMin*(N/6)+Min*(N%6),Min*N),PMin*(N/6+1)));
}
