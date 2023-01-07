#include<stdio.h>
void grt(int, int, int);
void main(){
    int x, y, z;
    printf("enter three numbers");
    scanf("%d%d%d", &x, &y, &z);
    grt(x,y,z);
}
void grt(int a, int b, int c){
    if(a>b)
    {
        if(a>c)
        {
           printf(" the greatest number is %d", a);
        }
        else
        {
            printf(" the greatest number is %d", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf(" the greatest number is %d", b);
        }
        else
        {
            printf(" the greatest number is %d", c);
        }
    }
}