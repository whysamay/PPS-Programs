#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    printf("Enter a word ");
    scanf("%s", str1);
    strrev(str1);
    puts(str1);
    return 0;
}