#include<stdio.h>
void main(){
    int n=0;
    int a[n], i, num, pos=-1;
    printf("enter how many numbers u want in array");
    scanf("%d", &n);
    printf("enter any numbers");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter the number whose position u want to know");
    scanf("%d", &num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
            break;
        }
    }
    if(pos>=0){
        printf("position is %d", pos);
    }
    else{
        printf("number not found");
    }
}