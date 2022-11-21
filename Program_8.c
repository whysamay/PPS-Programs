#include<stdio.h>
#include<conio.h>
int main()
{   
    printf("Name: Samay pawar\n");
    printf("Roll no. 25316\n");
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if(a>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}