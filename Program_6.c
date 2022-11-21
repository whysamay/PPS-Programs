#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    int a, b;
    printf("Enter the for value a :");
     scanf("%d", &a);
    printf("Enter the for value b :");
     scanf("%d", &b);
    if(a==b)
    { 
        printf("both numbers are equal");
    }
    else if(a>b)
    {
        printf(" the greatest number is %d", a);
    }
    else if(b>a)
    {
        printf(" the greatest number is %d", b);
    }
    return 0;
}