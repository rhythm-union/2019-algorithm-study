#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n = 0;
	scanf("%d", &n);
		
	for(int q = 0; q < n; q++){
		string num;
		cin>>num;
		
		if(num[num.length()-1]%2 == 0){
			printf("even\n");
		} else {
			printf("odd\n");
		}
	}
	
}
