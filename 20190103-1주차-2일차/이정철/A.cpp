#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> s;
int main() {
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			cin >> x;
			s.push(x);
		}
		else if (str == "top") {
			if (s.empty())cout << "-1" << "\n";
			else cout << s.top() << "\n";
		}
		else if (str == "pop") {
			if (s.empty())cout << "-1" << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (str == "empty") {
			cout << s.empty() << "\n";
		}
		else {
			cout << s.size() << "\n";
		}
	}
	return 0;
}