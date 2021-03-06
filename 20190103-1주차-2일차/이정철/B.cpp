#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool EmptyCheck(string str);
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (EmptyCheck(str))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

bool EmptyCheck(string str)
{
	int len = str.length();
	stack<char> sta;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
		{
			sta.push(str[i]);
		}
		else
		{
			if (sta.empty())
			{
				return false;
			}
			else
			{
				sta.pop();
			}
		}
	}
	return sta.empty();
}