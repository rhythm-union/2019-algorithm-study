#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
vector<char> DFS_v;
set<char> aeiou({ 'a','e','i','o','u' });
char arr[16];
int L, C;
void DFS(int depth, int vowel, int conso, int start);
int main()
{
	cin >> L >> C;
	for (int i = 0; i < C; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + C);
	for (int i = 0; i < C; i++)
	{
		DFS_v.push_back(arr[i]);
		if (aeiou.find(arr[i]) == aeiou.end())
		{
			DFS(0, 0, 1, i + 1);
		}
		else
		{
			DFS(0, 1, 0, i + 1);
		}
		DFS_v.pop_back();
	}
	return 0;
}

void DFS(int depth, int vowel, int conso, int start)
{
	if (depth == L - 1)
	{
		if (vowel < 1 || conso < 2)
		{
			return;
		}
		for (int i = 0; i < L; i++)
		{
			cout << DFS_v[i];
		}
		cout << endl;
		return;
	}
	if (start >= C)
	{
		return;
	}
	if (L - (vowel + conso) > C - start)
	{
		return;
	}
	for (int i = start; i < C; i++)
	{
		DFS_v.push_back(arr[i]);
		if (aeiou.find(arr[i]) == aeiou.end())
		{
			DFS(depth + 1, vowel, conso + 1, i + 1);
		}
		else
		{
			DFS(depth + 1, vowel + 1, conso, i + 1);
		}
		DFS_v.pop_back();
	}
}