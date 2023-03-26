#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int P[1001];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> P[i];
	int res = 0, min_num = 1, max_num = 1;
	for (int i = 1; i <= n; i++)
	{
		if (P[i] < P[i + 1])
		{
			max_num++;
			res = max(res, P[max_num] - P[min_num]);
		}
		else
		{
			max_num = i + 1;
			min_num = i + 1;
		}
	}
	cout << res;

	return 0;
}