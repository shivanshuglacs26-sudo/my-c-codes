#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your value a");
    scanf("%d",&a);
    printf("enter your vakue b");
    scanf("%d",&b);
    if((a%10)==(b%10)){
        printf("dono ka last digit same hai ",a%10,b%10);
    }
    else{
         printf("dono ka last digit sam nhi hai ",a%10,b%10);
    }
    return 0;
}