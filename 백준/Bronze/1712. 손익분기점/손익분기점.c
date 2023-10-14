#include<stdio.h>

int main() 
{
    long long int A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    
    if (C-B <= 0)
        printf("-1");
    else
        printf("%d", (A/(C-B)+1));
    return 0;
}