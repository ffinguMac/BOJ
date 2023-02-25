#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	int person = 0, max_value = -1;

	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		person += -a + b;
		if (person > max_value)
			max_value = person;
	}
	cout << max_value;

	return 0;
}
