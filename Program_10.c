#include<stdio.h>
int main(){
    int a, b, c;
    float d;
    printf("Name: Samay Pawar\n");
    printf("Roll no. 25316\n");

    printf("choose which operation do u want to use: 1. + \n 2. - \n 3. / \n 4. * \n");
    scanf("%d", &c);
    printf(" enter two numbers");
    scanf("%d %d", &a, &b);

    switch(c){
        case 1:
        
            d=a+b;
            printf("addition is %f ", d);
            break;
        
        case 2:
        
            d=a-b;
            printf("sub is %f ", d);
            break;
        
        case 3:
        
            d=a/b;
            printf("div is %f ", d);
            break;
        
        case 4:
        
            d=a*b;
            printf("mul is %f ", d);
            break; 
        default:
            printf("null");
        
    }
    return 0;
}
