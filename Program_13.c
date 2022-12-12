#include<stdio.h>
int main()
{
    int a, i, n=0;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("the sum of first 100 natural number will be \n");
    for(i=0; i<101; i++)
    {
        n=n+i;
    }
    printf("%d", n);
    return 0;
}