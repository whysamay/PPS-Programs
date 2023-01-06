#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20], l;
    printf("Enter a word ");
    scanf("%s", str1);
    printf("Enter a word ");
    scanf("%s", str2);
    l=strcmp(str1 , str2);
    if(l==0)
    printf("both words are same");
    else
    printf("both words are different");
    return 0;
}