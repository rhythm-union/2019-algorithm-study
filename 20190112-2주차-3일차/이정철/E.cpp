#include <iostream> 
using namespace std;
int main() {
	long long n;
	cin >> n;
	long long l = 0;
	long long r = 1e9 * 4ll;
	long long answer = 0;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (1ull * m * m >= n) {
			answer = m;
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	cout << answer;
	return 0;
}