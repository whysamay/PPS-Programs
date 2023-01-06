#include<stdio.h>
void main(){
    int n=0;
    int a[n], val, pos, i;
    printf("enter how many digits u want in array");
    scanf("%d", &n);
    printf("enter the digits");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter which position u want to delete");
    scanf("%d", &pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d \t", a[i]);
    }
}