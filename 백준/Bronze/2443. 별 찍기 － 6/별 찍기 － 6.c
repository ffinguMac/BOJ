#include<stdio.h>

int main() 
{
    int N;
    scanf ("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = N; j > i; j--)
            printf("%c", '*');
        for (int j = N; j > i+1; j--)
            printf("%c", '*');
        printf("\n");
    }
    return 0;  
}