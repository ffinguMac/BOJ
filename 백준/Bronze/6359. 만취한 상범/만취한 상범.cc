#include <stdio.h>
int main(void)
{
	int T, n;
    scanf("%d", &T);
	while (true)
	{
	    if (T <= 0)
	        break;
		scanf("%d", &n);
		int tab[101] = {0};
		int res = 0;
		int i = 1;
		while (i <= n)
		{
			int j = i;
			while (j <= n)
			{
				tab[j] = !tab[j];
				j+=i;
			}
			i++;
		}
		int k = 1;
		while (k <= n)
		{
			res+=tab[k];
			k++;
		}
		printf("%d\n", res);
		T--;
	}
}