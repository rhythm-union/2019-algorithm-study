#include <iostream>
#include <algorithm>
#include <string>
#pragma warning(disable:4996)
bool compare(std::string& str1, std::string& str2);
int main()
{
	std::string joongbok;
	std::string N[20001];
	int n, i;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		std::cin >> N[i];
	}
	sort(N, N + n, compare);
	for (i = 0; i < n; i++)
	{
		if (N[i] != joongbok)
		{
			std::cout << N[i] << std::endl;
		}
		joongbok = N[i];
	}
    return 0;
}

bool compare(std::string& str1, std::string&str2)
{
	if (str1.length() != str2.length())
	{
		return str1.length() < str2.length();
	}
	else
	{
		return str1 < str2;
	}
}