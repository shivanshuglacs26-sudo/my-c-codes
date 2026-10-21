#include<stdio.h>
int main(){
    float basic;
    printf("enter your basic");
    scanf("%f",&basic);
  float hra=basic*10/100;
  float da=basic*5/100;
float gross=basic+hra+da;
    printf("gross =%.2f",gross);
    return 0;
}