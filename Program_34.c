#include<stdio.h>
#include<string.h>
void main(){
    int l, i, res=0;
    char s[200], b[200];
    printf("enter a word");
    gets(s);
    strcpy(b,s);
    strrev(s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]!=b[i]){
            res=1;
            break;
        }
    }
    
    if(res==1){
    printf("%s is not a palindrome");
    }    
    else {
    printf("%s is a palindrome");
    }
}