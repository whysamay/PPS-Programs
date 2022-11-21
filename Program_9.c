#include<stdio.h>
#include<conio.h>
int main()
{   
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    int a, b;
    printf("Enter a number :");
     scanf("%d", &a);
    b=a%2;
    if(b==0)
    {
        printf(" The number is even");
    }
    else
    {
        printf(" The number is odd");
    }

}
