#include<stdio.h>
int main(){
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    if(n>0){
        printf("positive number");
    }
    else if(n==0){
        printf("zero");
    }
    else{
        printf("negative number");
    }
    return 0;
}