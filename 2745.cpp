#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string N;
	int B, res = 0;
	cin >> N >> B;

	for (int i = 0; i < N.size(); i++)
	{
		if (N[i] >= '0' && N[i] <= '9')
			res = res * B + (N[i] - '0');
		else
			res = res * B + (N[i] - 'A' + 10);
	}
	cout << res;

	return 0;
}
