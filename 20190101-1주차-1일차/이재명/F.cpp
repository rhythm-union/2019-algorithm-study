#include <stdio.h>
#include <algorithm>
int a[10001];
int main(){
    int n;
    scanf("%d",&n);
    int check;
    for(int i=0;i<n;i++){ 
        scanf("%d",&check);
        a[check]++;
        }
    for(int i=0;i<=10000;i++){
        while(a[i]--){
            printf("%d\n",i);
        }
    }
}
