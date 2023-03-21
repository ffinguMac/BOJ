#include <iostream>
using namespace std;

int main(void)
{
	int X, num = 1;
	cin >> X;

	while (X > num)
	{
		X -= num;
		num++;
	}

	if (num % 2 == 1)
		cout << num + 1 - X << '/' << X;
	else
		cout << X << '/' << num + 1 - X;

	return 0;
}