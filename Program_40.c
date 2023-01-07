#include<stdio.h>
void main(){
    int *p, a=10,c=12;
    p=&c;
    printf("value of a: %d \n", *(&a));
    printf("address of a: %d \n", &a);
    printf("value of c: %d \n", *p);
    printf("address of c: %d \n", p);
}