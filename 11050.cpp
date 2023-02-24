#include <iostream>
using namespace std;

int iterative_factorial(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;

	return res;
}
int 
int main(void)
{
	int N, K;
	cin >> N >> K;

	int res = iterative_factorial(N) / (iterative_factorial(K) * iterative_factorial(N - K));
	cout << res;

	return 0;
}
