#include <iostream>
using namespace std;

int main(void)
{
	long long N;
	long long res = 0;
	cin >> N;
	for (long long i = 1; i < N; i++)
		res += (N * i) + i;
	cout << res;

	return 0;
}