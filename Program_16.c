#include<stdio.h>

int main()
{
    int n, r, sum=0, temp;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("enter any number");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("armstrongnumber\n");
    else
    printf("not armstrong number\n");
    return 0;

}