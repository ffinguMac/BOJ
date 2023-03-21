#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string arr;
	int tab[26] = { 0 };
	cin >> arr;
	for (int i = 0; i < arr.size(); i++)
	{
		int tmp = arr[i];
		if ('a' <= tmp && tmp <= 'z')
			tmp -= 32;
		tab[tmp - 65]++;
	}
	int val = 0, res = 0;
	for (int i = 0; i < 26; i++)
	{
		if (tab[i] > val)
		{
			val = tab[i];
			res = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (tab[i] == val)
			cnt++;
	}
	if (cnt != 1)
	{
		cout << '?';
		return 0;
	}
	else
	{
		cout << (char)(res + 65);
		return 0;
	}
}