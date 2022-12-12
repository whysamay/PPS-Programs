#include<stdio.h>
int main(){
    int i, num, fact=1;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("enter no.");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of number %d is %d", num, fact);
    return 0;

}