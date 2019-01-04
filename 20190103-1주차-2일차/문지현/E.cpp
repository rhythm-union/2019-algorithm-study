#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool strcmp(const string& a, const string& b){
	if(a.length() != b.length()){
		return a.length() < b.length();
	} else {
		return a < b;
	}
}

int main(){
	
	int cnt;
	scanf("%d", &cnt);
	
	string str[20001];
	
	for(int q = 0; q < cnt; q++){
		cin >> str[q];
	}
	
	sort(str, str+cnt, strcmp);
	string sub = "";
	for(int w = 0 ; w < cnt; w++){
		if(str[w] != sub){
			cout << str[w] << endl;
			sub = str[w];
		}
	}
	
	return 0;
}
