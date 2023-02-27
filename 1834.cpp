#include <iostream>
using namespace std;

int main(void)
{
	long long N;
	long long res = 0;
	cin >> N;
	for (long long i = 1; i < N; i++)
		res += (N + 1) * i;
	cout << res;

	return 0;
}
