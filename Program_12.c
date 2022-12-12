#include<stdio.h>
int main()
{
    int a, i=0, n=0, j=0;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");
    printf("counting 1 to 10 by for loop\n");
    for(i=0; i<11; i++)
    {
        printf("[%d]\n",i);
    }
     
    printf("counting 1 to 10 by while loop\n");
    while(n<11)
    {
        printf("[%d]\n", n);
        n++;
    }

    printf("counting 1 to 10 by do-while loop\n");
    do{
        printf("[%d]\n", j);
        j++;
    }while(j<11);

    return 0;

}