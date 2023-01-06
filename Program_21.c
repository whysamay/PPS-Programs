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
    printf("enter which value u want to add");
    scanf("%d", &val);
    printf("enter at which position u want to add the value");
    scanf("%d", &pos);
    n++;
    for(i=n-1;i>pos-1;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    for(i=0;i<n;i++){
        printf("%d \t", a[i]);
    }
}