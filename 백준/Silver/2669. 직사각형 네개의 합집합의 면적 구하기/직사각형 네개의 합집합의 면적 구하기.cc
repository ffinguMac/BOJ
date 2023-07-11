#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int> > tab(101, vector<int>(101));
	for (int i = 0; i < 4; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++)
			for (int k = y1; k < y2; k++)
				tab[j][k] = 1;
	}
	int res = 0;
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (tab[i][j] == 1)
				res++;
	cout << res;

	return 0;
}