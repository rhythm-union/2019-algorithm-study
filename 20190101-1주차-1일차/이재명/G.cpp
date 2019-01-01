#include <stdio.h>
#include <algorithm>
#include <string.h>
int a[1001000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    std::sort(a,a+n);
    for(int i=n-1;i>=0;i--) printf("%d\n",a[i]);
}
