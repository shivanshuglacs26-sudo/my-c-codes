#include<stdio.h>
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if(n>=10&&n<=99&&n%2==0){
        printf("even number",n);
    }
    else{
        printf("odd",n);
    }
    return 0;
}