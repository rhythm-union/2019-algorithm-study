#include <stdio.h>
#include <string.h>
int arr[100001];
char func[100001];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%s",func);
		int n;
		scanf("%d\n",&n);
		int start=0,end=n-1,sw=0;
		getchar();
		for(int i=0;i<n-1;i++) scanf("%d,",&arr[i]);
		if(n>0) scanf("%d]",&arr[n-1]);
		else getchar();
		int len=strlen(func);
		for(int i=0;i<len;i++){
			if(func[i]=='R') sw=1-sw;
			else if(func[i]=='D'){
				if(end<start){
					printf("error\n");
					sw=-1;
					break;
				}
				start+=sw==0;
				end-=sw==1;
			}
		}
		if(end>=start){
			printf("[");
			if(sw==0){
			for(int i=start;i<end;i++) printf("%d,",arr[i]);
			printf("%d]\n",arr[end]);
			}
			else{
			for(int i=end;i>start;i--) printf("%d,",arr[i]);
			printf("%d]\n",arr[start]);
			}
			
		}
		else if(end+1==start&&sw!=-1) printf("[]\n");
		for(int i=0;i<n;i++) arr[i]=0;
	}
} 
