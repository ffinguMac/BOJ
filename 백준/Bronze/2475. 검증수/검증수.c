#include <stdio.h>

int main()
{
	int arr[5];
	int i, s;
	int sum = 0;
	for (i = 0; i < 5; i++)
	    scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
        sum += arr[i]*arr[i];
	printf("%d", sum%10);
	return 0;
}