#include<stdio.h>
void grt();
void main(){
    int a[10], i;
    printf("enter any 10 numbers");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    grt(a);
}

void grt(int a[]){
    int large, i;
    large=a[0];
    for(i=0;i<10;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf(" large is %d ", large);
}