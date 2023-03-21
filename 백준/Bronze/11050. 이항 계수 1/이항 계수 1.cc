#include <iostream>
using namespace std;

int factorial(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;

	return res;
}
int main(void)
{
	int N, K;
	cin >> N >> K;

	int res = factorial(N) / (factorial(K) * factorial(N - K));
	cout << res;

	return 0;
}