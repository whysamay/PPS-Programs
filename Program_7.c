#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    int a, b, c;
    printf("Enter the for value a :");
     scanf("%d", &a);
    printf("Enter the for value b :");
     scanf("%d", &b);
    printf("Enter the for value c :");
     scanf("%d", &c);
    if(a>b)
    {
        if(a>c)
        {
           printf(" the greatest number is %d", a);
        }
        else
        {
            printf(" the greatest number is %d", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf(" the greatest number is %d", b);
        }
        else
        {
            printf(" the greatest number is %d", c);
        }
    }
    
}