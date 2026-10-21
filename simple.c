#include<stdio.h>
int main(){
    int p,r,t;
    printf("enter your p value");
    scanf("%d",&p);
    printf("enter your r value");
    scanf("%d",&r);
    printf("enter your t value");
    scanf("%d",&t);
    int simple=p*r*t/100;
    printf("simple_intrest=%d",simple);
    return 0;
}