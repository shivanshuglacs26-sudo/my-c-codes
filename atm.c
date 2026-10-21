#include<stdio.h>
int main()
{
    int balance,amount;
    printf("enter your blance");
    scanf("%d",&balance);
    printf("enter your amount");
    scanf("%d",&amount);
    if((balance>=amount)&&(amount%100==0)){
        printf("paise niklege",balance,amount);
    }
    else{
        printf("nhi niklege",balance,amount);
    }
    return 0;

}