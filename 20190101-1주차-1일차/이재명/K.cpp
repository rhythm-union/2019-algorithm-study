#include <stdio.h>
#define abs(x) ((x)>0?(x):-(x))
int main(){
	int w,h,p,q,t;
	scanf("%d %d %d %d %d",&w,&h,&p,&q,&t);
	printf("%d %d",abs(w-abs(w-p-t%(2*w))),abs(h-abs(h-q-t%(2*h))));
}
