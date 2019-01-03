#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	
	int count = 0;
	scanf("%d", &count);
	
	if(count > 1000){
		return 0;
	} 
	int total[count] = { 0,};

	int dice[count][4];
	
	for(int q = 0; q < count; q++){
		for(int w = 0; w < 4; w++){
			scanf("%d", &dice[q][w]);
		}
	}
	int cnt = 0;
	for(int e = 0; e < count; e++){
		for(int r = 0; r < 4; r++){
			if(dice[e][r] == dice[e][r+1]){
				cnt++;
				int same = dice[e][r];
				if(cnt == 3){
					//같은 눈이 4개가 나오면 50,000원+(같은 눈)*5,000원의 상금을 받게 된다. 
					 total[e] = 50000 + same*5000;
					 cnt = 0;
					 same = 0;
				}
				if(cnt == 2){
					//같은 눈이 3개만 나오면 10,000원+(3개가 나온 눈)*1,000원의 상금을 받게 된다. 
					total[e+1] = 10000 + same*1000;
					cnt = 0;
					same = 0;
				}
			}
		}
	}
	
	//가장 많은 상금을 받은 사람의 상금을 출력한다.
	printf("%d", *max_element(total, total+count));
	
	
	
}
