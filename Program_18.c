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
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("plaindromenumber\n");
    else
    printf("not palindrome number\n");
    return 0;

}