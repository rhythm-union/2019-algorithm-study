#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int stair[301];
	int dp[301];
	int stair_cnt;
	cin >> stair_cnt;
	for (int i = 0; i < stair_cnt; i++)
	{
		cin >> stair[i];
	}
	dp[0] = stair[0];
	dp[1] = max(stair[0] + stair[1], stair[1]);
	dp[2] = max(stair[1] + stair[2], stair[0] + stair[2]);
	for (int i = 3; i < stair_cnt; i++)
	{
		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
	}
	cout << dp[stair_cnt - 1];
	return 0;
}