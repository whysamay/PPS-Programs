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
    c=a;
    a=b;
    b=c;
    printf("The value of a is  %d \n", a); 
    printf("The value of b is  %d \n", b); 
}