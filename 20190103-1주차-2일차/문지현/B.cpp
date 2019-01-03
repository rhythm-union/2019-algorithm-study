#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;



bool Empty(string str){
	
	int length = str.length();
	stack<char> s;
	
	for(int q = 0; q < length; q++){
		char st = str[q];
		
		if(st == '('){
			s.push(str[q]);
		}else{
			if(!s.empty()){
				s.pop();
			}else{
				return false;
			}
		}
	}
	
	return s.empty();
}

int main(){
	
	
	int n = 0;
	string str;
	
	scanf("%d", &n);
	for(int w = 0; w < n; w++){
	cin >> str;
	
	if(Empty(str)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
}
