#include<stdio.h>
int powr(int, int);
void main(){
    int a, b;
    printf("enter base");
    scanf("%d", &a);
    printf("enter power");
    scanf("%d", &b);
    int k=powr(a, b);
    printf(" %d^%d=%d", a, b, k);
}

int powr(int x, int y){
    int i, g=1;
    for(i=0;i<y;i++){
        g=g*x;
    }
    return g;
}