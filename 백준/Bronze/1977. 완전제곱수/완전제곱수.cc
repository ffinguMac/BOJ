#include <iostream>
using namespace std;

int main(void)
{
	int m, n;
	cin >> m >> n;
	int sum = 0, cnt = 0, min = 20000;
	for (int i = 1; i <= 100; i++)
	{
		if (m <= i * i && i * i <= n)
		{
			sum += i * i;
			cnt++;
		}
		if (m <= i * i && i * i <= n && i * i < min)
			min = i * i;
	}
	if (cnt == 0)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		cout << sum << '\n' << min;
		return 0;
	}
}