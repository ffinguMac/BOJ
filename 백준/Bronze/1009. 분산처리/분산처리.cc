#include <iostream>
using namespace std;

int main(void) 
{
	int T, a, b, res;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		res = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
			res = (res * a) % 10;
		if (res == 0)
			cout << 10 << '\n';
		else
			cout << res << '\n';
	}
	return 0;
}