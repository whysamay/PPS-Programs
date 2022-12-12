#include<stdio.h>
int main(){
    int a, i, count=0;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("enter a number");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}