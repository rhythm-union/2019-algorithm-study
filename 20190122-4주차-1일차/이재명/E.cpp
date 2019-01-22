#include <stdio.h>
#include <algorithm>
using namespace std;
char arr[16];
char vowel[]="aeiou";
int cnt[2], visit[16];
int L,C;
int chk(char c){
	for(int i=0;i<5;i++){
		if(c==vowel[i]) return 1;
	}
	return 0;
}
void bt(int t, int s){
	if(t==L){
		if(cnt[1]>0&&cnt[0]>1){
			for(int i=0;i<C;i++) if(visit[i]) printf("%c",arr[i]);
			printf("\n");
		}
		return;
	}
	for(int i=s;i<C;i++){
		visit[i]=1;
		cnt[chk(arr[i])]++;
		bt(t+1,i+1);
		cnt[chk(arr[i])]--;
		visit[i]=0;
	}
}
int main(){
	scanf("%d %d\n",&L,&C);
	for(int i=0;i<C-1;i++) scanf("%c ",arr+i);
	scanf("%c",arr+C-1);
	sort(arr,arr+C);
	bt(0,0);
}
