#include<stdio.h>
void main(){
    int a[10], i, small, large;
    printf("Enter any 10 number");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    large=a[0];
    small=a[1];
    for(i=0;i<10;i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
    }
    printf(" large is %d and small is %d", large, small);
}