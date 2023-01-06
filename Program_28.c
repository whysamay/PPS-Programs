#include<stdio.h>
void main(){
    int a[100][100], i, r, c, sum=0, j;
    printf("enter number of rows");
    scanf("%d", &r);
    printf("enter number of coloumn");
    scanf("%d", &c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum %d", sum);
}