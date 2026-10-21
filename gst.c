#include<stdio.h>
int main(){
    float price;
    printf("enter your number");
    scanf("%f",&price);
    float total= price+(price*18.0f/100.0f);
    printf("total=%.2f\n",total);
}