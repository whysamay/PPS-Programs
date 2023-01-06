#include<stdio.h>
void main(){
    int n=0;
    int a[n], i, j, temp=0;
    printf("enter how many digits u want in array");
    scanf("%d", &n);
    printf("enter the digits");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d", a[i]);
    }
}