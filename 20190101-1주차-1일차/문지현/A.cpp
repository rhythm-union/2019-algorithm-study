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
					//���� ���� 4���� ������ 50,000��+(���� ��)*5,000���� ����� �ް� �ȴ�. 
					 total[e] = 50000 + same*5000;
					 cnt = 0;
					 same = 0;
				}
				if(cnt == 2){
					//���� ���� 3���� ������ 10,000��+(3���� ���� ��)*1,000���� ����� �ް� �ȴ�. 
					total[e+1] = 10000 + same*1000;
					cnt = 0;
					same = 0;
				}
			}
		}
	}
	
	//���� ���� ����� ���� ����� ����� ����Ѵ�.
	printf("%d", *max_element(total, total+count));
	
	
	
}
