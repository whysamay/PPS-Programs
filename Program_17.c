#include<stdio.h>
int main()
{
    int n,r, sum=0, t;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("enter any number");
    scanf("%d", &n);
    for(t=n;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum*10+r;
    }
    printf("the number in reverse order is : %d  ", sum);
    return 0;
}