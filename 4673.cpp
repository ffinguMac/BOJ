#include <iostream>
using namespace std;

int d(int num)
{
	int check_num = num;
	while (num)
	{
		check_num += num % 10;
		num /= 10;
	}
	
	return check_num;
}
int main(void)
{
	int tab[10001] = { 0 };

	for (int i = 1; i <= 10000; i++)
	{
		int num = d(i);
		if (num <= 10000)
			tab[num]++;
	}
	for (int i = 1; i <= 10000; i++)
		if (tab[i] == 0)
			cout << i << '\n';

	return 0;
}
