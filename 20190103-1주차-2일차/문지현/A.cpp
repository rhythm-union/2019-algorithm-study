#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
stack<int> s;

int main(){
	
	int n = 0;
	int num = 0;
	string cmd;
	scanf("%d", &n);
	
	for(int q = 0; q < n; q++){
		cin >> cmd;
		
		if(cmd == "push"){
			scanf("%d", &num);
			s.push(num);
		} else if(cmd == "pop"){
			if(s.empty() == 1){
				printf("-1\n");
			} else {
				printf("%d\n", s.top());
				s.pop();
			}
		} else if(cmd == "size"){
			printf("%d\n",s.size());
		} else if(cmd == "empty"){
			if(s.empty() == 1){
				printf("1\n");
				} else if(s.empty() == 0){
					printf("0\n");
				}
		} else if(cmd == "top"){
			if(s.empty() == 1){
				printf("-1\n");
			} else{
				printf("%d\n", s.top());
			}
		}
	}
}
