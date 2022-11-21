#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    float P, R, T, SI;
    printf("Enter the principal amount : ");
     scanf("%f", &P);
    printf("Enter the rate : ");
     scanf("%f", &R);
    printf("Enter the time : ");
     scanf("%f", &T);
    SI= (P*R*T)/100;
    printf("Simple Interest is : %f", SI);
    return 0;
}