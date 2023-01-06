#include<stdio.h>
void main(){
    int i, j, r=0, c=0;
    int a[3][3];
    printf("enter the elements for 2D array");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("elements at [%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", a[i][j]);
			if(j==2)
			printf("\n");
		}
	}
}