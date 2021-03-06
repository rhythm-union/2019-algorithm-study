#include <iostream>
#include <algorithm>
using namespace std;
typedef struct
{
	int a;
	int b;
}grade;
grade arr[100001];
bool comp(grade& a, grade& b);
int main() {
	int t, n;
	int imsi_b;
	int count;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		count = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j].a >> arr[j].b;
		}
		sort(arr, arr + n, comp);
		imsi_b = arr[0].b;
		count++;
		for (int j = 1; j < n; j++)
		{
			if (imsi_b > arr[j].b)
			{
				count++;
				imsi_b = arr[j].b;
			}
		}
		cout << count << endl;
	}
	return 0;
}

bool comp(grade& a, grade& b)
{
	if (a.a != b.a)
	{
		return a.a < b.a;
	}
}