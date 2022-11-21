#include<stdio.h>
#include<conio.h>
int main()
{   
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    // Declare the numbers as float 
    float a, b, c, d, e, f;
    printf("Enter any two values:");
    scanf("%f%f", &a, &b);
    c = a+b;
    printf("Addition of the two numbers are %f\n",c);
    d = a-b;
    printf("Subtraction of the two numbers are %f \n",d);
    e = a/b;
    printf("Division of the two numbers are %f\n",e);
    f = a*b;
    printf("Multiplication of the two numbers are %f\n",f);
    return 0;
}