#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter your first name: ");
    scanf("%s", str1);
    printf("Enter your last name: ");
    scanf("%s", str2);
    strcat(str1 , str2);
    printf("%s", str1);
    return 0;
}