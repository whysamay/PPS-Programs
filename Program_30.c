#include<stdio.h>
#include<stdio.h>
int main()
{
    int l;
    char str[20];
    printf("Enter your name: ");
    scanf("%s", str);
    l=strlen(str);
    printf("%d",l);
    return 0;
}