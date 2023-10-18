#include<stdio.h>

int main() 
{
    int A, B, V;
    int day = 0;
    scanf("%d %d %d", &A, &B, &V);
    
    if (A == V)
        printf("1");
    else
    {
        day = (V-A)/(A-B);
        if ((V-A)%(A-B) == 0)
            printf("%d", day+1);
        else
            printf("%d", day+2);
    }
    
    return 0;
 
}