#include<stdio.h>
void swp(int, int);
void main(){
    int a, b;
    printf("enter two numbers");
    scanf("%d%d", &a,&b);
    printf("before swapping a = %d and b =  %d\n", a, b);
    swp(a,b);
}

void swp(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swapping a = %d and b =  %d\n", x, y); 
}