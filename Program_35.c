#include<stdio.h>
void message(); 
void main()
{
message(); 
}
 
void message() 
{
    char s[20];
    printf("enter your name");
    gets(s);
    puts(s);
    printf("Hi , How are you ? ");
}