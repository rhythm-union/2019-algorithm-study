#include <stdio.h>
int main(){
	int w,h,p,q,t;
	scanf("%d %d %d %d %d",&w,&h,&p,&q,&t);
	int dp=t%(2*w),dq=t%(2*h);
	if(dp+p>=w){
		dp=-(dp-w+p);
		p=w;
		if(p+dp<=0){
		dp=-(dp+w);
		p=0;
		}
	}
	if(dq+q>=h){
		dq=-(dq-h+q);
		q=h;
		if(q+dq<=0){
		dq=-(dq+h);
		q=0;
		}
	}
	printf("%d %d",p+dp,q+dq);
}
