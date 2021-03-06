#include <iostream>
#include <algorithm>
using namespace std;
typedef struct
{
	int time_start;
	int time_end;
}time;
time arr[100001];
bool comp(time& a, time& b);
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].time_start >> arr[i].time_end;
	}
	sort(arr, arr + n, comp);
	int count = 1;
	int imsi = arr[0].time_end;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			break;
		}
		if (imsi <= arr[i + 1].time_start)
		{
			count++;
			imsi = arr[i + 1].time_end;
		}
	}
	cout << count;
    return 0;
}

bool comp(time& a, time& b)
{
	if (a.time_end != b.time_end)
	{
		return a.time_end < b.time_end;
	}
	else
	{
		return a.time_start < b.time_start;
	}
}