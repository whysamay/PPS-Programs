#include<stdio.h>
int main(){
    int n1=0, n2=1, n3, number, i;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("enter no. of elements");
    scanf("%d", &number);
    printf("%d %d ", n1, n2);
    for(i=2;i<number;++i)
    {
        n3= n1+n2;
        printf("%d   ", n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}