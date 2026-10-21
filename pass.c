#include<stdio.h>
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if((n<33)&&(n>0)){
        printf("%d fail",n);
    }
    else if((n>=33)&&(n<=100)){
        printf("%d pass",n);
    }
   
    else{
        printf("invalid number  0to 100 ke bech");
    }
}