#include <iostream>
using namespace std;

int d(int num)
{
	int self_num = num;
	while (num)
	{
		self_num += num % 10;
		num /= 10;
	}
	
	return self_num;
}
int main(void)
{
	int tab[10001] = { 0 };

	for (int i = 1; i <= 10000; i++)
	{
		int self_num = d(i);
		if (self_num <= 10000)
			tab[self_num]++;
	}
	for (int i = 1; i <= 10000; i++)
		if (tab[i] == 0)
			cout << i << '\n';

	return 0;
}