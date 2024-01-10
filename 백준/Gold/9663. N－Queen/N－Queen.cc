#include<iostream>
using namespace std;

int	check_queen(int* tab, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i + tab[i] == x + y || i - tab[i] == x - y || y == tab[i])
			return (0);
		i++;
	}
	return (1);
}

void	queen_puzzle(int* tab, int* result, int idx, int n)
{
	int	i;

	if (idx == n)
		*result += 1;	
	else
	{
		i = -1;
		while (++i < n)
		{
			if (check_queen(tab, idx, i))
			{
				tab[idx] = i;
				queen_puzzle(tab, result, idx + 1, n);
			}
		}
	}
}

int	n_queens_puzzle(int n)
{
	int	tab[15];
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < n)
	{
		tab[i] = -1;
		i++;
	}
	queen_puzzle(tab, &result, 0, n);
	return (result);
}

int main(void) {
	int n, res = 0;
	cin >> n;
	res = n_queens_puzzle(n);

	cout << res;

	return 0;
}