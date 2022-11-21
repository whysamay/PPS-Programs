#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    int a, b;
    printf("Enter the value for a :");
     scanf("%d", &a);
    printf("Enter the value for b :");
     scanf("%d", &b);
    a= a+b;
    b= a-b;
    a= a-b;

    printf("The value of a is  %d \n", a); 
    printf("The value of b is  %d \n", b); 
}
